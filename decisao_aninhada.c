#include <stdio.h>

    int main() {
        int idade;
        float renda;

        printf("Digite a sua idade: \n");
        scanf("%d",&idade);
        printf("Digite a sua renda mensal: \n");
        scanf("%.2f",&renda);

        if (idade<=18 || idade >= 60){
        /*    printf("aceito com relação a idade: \n");
        } else {
            printf("Voce nao atende aos criterios devido a idade");
        }
            */
         if  (renda <2000){
            printf("Você tem direito ao desconto\n");
         } else {
            printf("Você não tem direito ao desconto devido a renda\n ");
         }
    }    