#include <unistd.h>
#include <sys/syscall.h>
#include <string.h>

void printone(char c){
    
    char buffer = c;
    int fd = 1;        
    int count = 1;      
    int syscall_num = 0x1; 

    asm volatile (
       
        "addi x0, %0\n\t"    
        "addi x1, %1\n\t"    
        "mv x2,  %2\n\t"    
        "addi x7, %3\n\t"    
        "ecall\n\t" 
        
        :
        : "r" (fd),        // %0: Entrada para a0
          "r" (&buffer),   // %1: Entrada para a1 (puntero a la variable)
          "r" (count),     // %2: Entrada para a2
          "r" (syscall_num) // %3: Entrada para a7
        : "X0", "x1", "x2", "x7", "memory" // Clobbers (estos nombres de clobber *sí* suelen ser aceptados)
    );
}

int main() {
    printone('s'); 
    return 0;
}