#include <stdio.h>

int main() {
    int numero1 = 1, resultado;

    printf("antes incremento: %d \n", numero1);
    numero1++;
    printf("Apos incremento: %d\n", numero1);

     printf("antes decremento: %d \n", numero1);
    numero1--;
    printf("Apos decremento: %d\n", numero1);
    printf("#########################################################\n");

     printf("antes incremento: %d \n", numero1);
    resultado = numero1++;

     printf("após pos-incremento - Numero 1: %d - Resultado: %d\n", numero1,resultado);
    
     resultado = ++numero1;
     printf("após pré-incremento - Numero 1: %d - Resultado: %d\n\n", numero1,resultado);
     resultado = numero1--;
     printf("após pos decremento - Numero 1: %d - Resultado: %d\n", numero1,resultado);
     resultado = --numero1;
     printf("após pre-decremento - Numero 1: %d - Resultado: %d\n\n", numero1,resultado);
    

    return 0;

}