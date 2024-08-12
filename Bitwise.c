#include <stdio.h>

int main(){
	// ------------- xor -------------
	char a = '3';
	char b = 'h';
	int cript = 0;
	// ------------- and -------------
	int valor1 = 10;
	int valor2 = 15;
	int res = 0;
	// ------------- our -------------
	int valor3 = 20;
	int valor4 = 25;
	int res1 = 0;
	// ------------- not -------------
	int valor5 = 127;
	int res2 = 0;
	// ------------- shift << -------------
	int valor6 = 10;
	int res3 = 0;
	// ------------- shift >> -------------
	int valor7 = 10;
	int res4 = 0;
	
	printf("------------- xor ---------------------------\n");
	printf("a = %c, b = %c\n", a, b);
	cript = a ^ b;
	printf("Xor is = %c\n", cript);
	/* 
		0000 0011 == 3 (xor)
		0110 1000 == h 104d 0x68 ASCII (h)
		--------------
		0110 1011 == 107d 0x6B ASCII ([)
	*/
	
	printf("------------- and ---------------------------\n");
	res = valor1 & valor2;
	printf("valor 1 = %d, valor 2 = %d\n", valor1, valor2);
	printf("And is = %d\n", res);
	/*
		0000 1010 == 10d (and)
		0000 1111 == 15d
		----------------
		0000 1010 ==10d
	*/
	
	printf("------------- our ---------------------------\n");
	res1 = valor3 | valor4;
	printf("valor 3 = %d, valor 4 = %d\n", valor3, valor4);
	printf("Our is = %d\n", res1);
	/*
		0001 0100 == 20d (our)
		0001 1001 == 25d
		----------------
		0001 1101 == 29d
	*/
	
	printf("-------------- not ---------------------------\n");
	res2 = ~valor5;
	printf("valor 5 = %d\n", valor5);
	printf("Not is = %d\n", res2);
	/*
		0111 1111 == 127d (not)
		-----------------
		1000 0000 == -128d
	*/

	printf("------------- shift << ----------------------\n");
	res3 = valor6 << 2;
	printf("valor 6 is = %d\n", valor6);
	printf("Shift << is = %d\n", res3);
	/*
		0000 0000 0000 0000 0000 0000 0000 1010 = 10d (<< 2) 32bits
		0000 0000 0000 0000 0000 0000 0010 1000 = 40d 
	*/

	printf("------------- shift >> ----------------------\n");
	res4 = valor7 >> 2;
	printf("valor 7 is = %d\n", valor7);
	printf("Shift >> is = %d\n", res4);
	/*
		0000 0000 0000 0000 0000 0000 0000 1010 = 10d (>> 2) 32bits
		0000 0000 0000 0000 0000 0000 0000 0010 = 2d
	*/
	
	return 0;
}