#include <stdio.h>

int main() {
	int valor1 = 10;
	int valor2 = 20;
	int valor3 = 3;
	int valor4 = 2;

	printf("%d + %d = %d\n", valor1, valor2, valor1 + valor2); // Addition
	printf("%d - %d = %d\n", valor1, valor2, valor1 - valor2); // Subtraction
	printf("%d X %d = %d\n", valor1, valor2, valor1 * valor2); // Multiplication
	printf("%d / %d = %d\n", valor1, valor2, valor1 / valor2); // Division
	printf("%d %% %d = %d\n", valor3, valor4, valor3 % valor4); // Remainder

	//Increment and decrement

	printf("Increment %d -> %d\n", valor1++, valor1);
	printf("Decrement %d -> %d\n", valor2--, valor2);

	// Depending on where the increment is positioned, the value will change

	return 0;
}