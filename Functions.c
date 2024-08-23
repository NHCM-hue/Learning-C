#include <stdio.h>
#include <stdlib.h>

int arre(int a, int b);

int main(int argv, char *argc[]){
    if (argv < 3 || argv >= 4){
        printf("Argumentos Errados, Exemplo:\n%s Valor 1 Valor 2", argc[0]);

        return 0;
    }
    printf("A divisao arredondada para cima de %d / %d: %d", atoi(argc[1]), atoi(argc[2]), arre(atoi(argc[1]), atoi(argc[2])));

    return 0;
}

int arre(int a, int b){
    float resultado = a % b;
    if (resultado != 0){
        resultado = a / b + 1;
    } else{
        resultado = a / b;
    }
    return resultado;
}

