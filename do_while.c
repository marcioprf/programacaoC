#include <stdio.h>
int main(){
int numero;

do {
    printf("\nDigite um numero par para sair do porgrama\n");
    scanf("%d",&numero);
    if(numero % 2 == 0) { // identificando se o resto dividido porr 2 é igual a zero que significa par
        printf("%d é par\n", numero);
    } else {
        printf("%d é impar\n", numero);
    }
} while (numero % 2 != 0);
printf(" Você digitou %d que é par, saindo do programa...\n\n", numero);

return 0;

}