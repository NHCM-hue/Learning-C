#include <stdio.h>

int main() {
	char letra = 'N'; //type char 
	int valor1 = 10; //type int
	int valor2 = 20; //type int
	float pi = 3.141592; //type float

	// Using printf with % to print variable values.

	printf("%c\n", letra); // %c for char
	printf("%d\n", valor1); // %d for int
	printf("%i\n", valor2); // %i for int
	printf("%f\n", pi); // %f for float
	printf("%.2f\n", pi); // %.2f to specify two decimal place

	return 0;

}