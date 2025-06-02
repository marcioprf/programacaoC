#include <stdio.h> 

    int main(){
        int numero;

        printf("Digite um numerro: \n");
        scanf("%d",&numero);

        if (numero >0){
            if (numero % 2 == 0)
            {
            printf("numero par\n");
            } else {
                printf("Numero impar\n");
            }
        } else if (numero ==0){
            printf("Numero igual a Zero");
        }
    }



