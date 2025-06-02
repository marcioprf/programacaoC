#include <stdio.h>

    int main() {
        int idade;

        printf("Digite a sua idade: \n");
        scanf("%d",&idade);

        //Criança < 12
        //Adolescente 12 <= x < 18
        //Adulto 18 <= x < 60
        //Idoso > 60

        if (idade < 12) {
            printf("Tu é Kid");
        } else if (idade >= 12 && idade < 18){
            printf("voce é um adolescente\n");
        } else if (idade >= 18 && idade < 60) {
            printf("Você é um adulto\n");
        }else 
            printf("tu é vôvô carra!\n");
        



    }

