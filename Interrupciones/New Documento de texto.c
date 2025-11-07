#include <stdio.h>
#include <signal.h>
#include <unistd.h>


int main() {
    // char ch;

    // printf("El abecedario en minúsculas es: \n");

    // // Bucle for para iterar desde 'a' hasta 'z'
    // for (ch = 'a'; ch <= 'z'; ch++) {
    //     printf("%c ", ch); // Imprime el carácter actual seguido de un espacio
    // }

    // printf("\n"); // Imprime una nueva línea al final

    // return 0;
    
    
    
    int i = 100;
    
    char ch = 'a';
    
    while (i>=0){
        
         printf("%c ", ch);
         
         ch++;
         
         if (ch == 'z'){
             ch = 'a';
         }
         
         
         
         
         
         i--;
    }
}