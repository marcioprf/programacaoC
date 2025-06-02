#include <stdio.h>

    int main() {
        int idade;
        float renda;
        int dependentes;

        printf("Digite a sua idade: \n");
        scanf("%d",&idade);
        printf("Digite a sua renda mensal: \n");
        scanf("%f",&renda);
         printf("Digite o numero de dependentes: \n");
        scanf("%d",&dependentes);

        if (idade>=18 && idade <= 65){
          
           if (renda < 3000){
             if(dependentes > 2)
             {
                printf("Voce atende a todos os criterios\n");
             } else {
                printf("Voce não atende ao criterio dependnete\n");
             }
           
            } else {
                printf("Voce nao atende ao criterio renda");
            }

        } else {
            printf("Voce nao atende ao criterio idade\n");
        }    

    }    