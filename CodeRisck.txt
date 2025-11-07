.global _start
_start:
	
	addi a7, x0,0x1 # Complete con el número de syscall: write
	addi a0, x0, 0   # primer argumento: fd
  	mv   a1, t0      # segundo argumento: buf
  	addi a2, x0, 1   # tercer argumento: count
  	ecall
