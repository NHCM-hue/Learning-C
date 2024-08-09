#include <stdio.h>



int main() {
	char option = 'c';
	int valor1 = 21;
	int b = 0;

	printf("------------- OR || --------------------------\n");
	if (option == 's' || option == 'S') {
		printf("Continue...\n");
	}
	else if (option == 'n' || option == 'N') {
		printf("has no access\n");
	}
	else{
		printf("You entered %c. Please enter S or N\n", option);
	}

	printf("------------- AND && -------------------------\n");
	if (valor1 > 10 && valor1 < 20) {
		printf("The value %d is within the range of 10 to 20\n", valor1);
	}
	else
	{
		printf("The value %d is not within the range of 10 to 20\n", valor1);
	}

	printf("------------- NOT ! --------------------------\n");
	if (!b) {
		printf("True");
	}
	else {
		printf("False");
	}
	return 0;
}