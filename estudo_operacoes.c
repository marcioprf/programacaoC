#include <stdio.h>

int main() {

    int numero1 = 10, numero2, resultado;

    resultado = 10;
    printf("Resultado1: %d\n", resultado);
    //resultado = resultado +20;
    resultado += 20;
    printf("Resultado2: %d\n", resultado);

    //resultado = resultado -numero1;
    resultado -= numero1;
    printf("Resultado3: %d\n", resultado);

    //resultado = resultado * 5
    resultado *= 5;
    printf("Resultado4: %d\n", resultado);

    //resultado = resultado / 2
    resultado /= 2;
    printf("Resultado5: %d\n", resultado);
}