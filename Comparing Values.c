#include <stdio.h>



int main() {
	int valor1 = 20;
	int valor2 = 20;
	int valor3 = 30;
	int valor4 = 40;
	int valor5 = 60;
	int valor6 = 50;
	int valor7 = 70;
	int valor8 = 80;


	if (valor1 == valor2) {
		printf("O valor de %d e %d sao iguais\n", valor1, valor2);
	}
	if (valor3 != valor4) {
		printf("O valor de %d e %d sao diferentes\n", valor3, valor4);
	}
	if (valor5 > valor6) {
		printf("O valor de %d e maior que %d\n", valor5, valor6);
	}
	if (valor7 < valor8) {
		printf("O valor de %d e menor que %d", valor7, valor8);
	}
	return 0;
}