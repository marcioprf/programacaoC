#include <stdio.h>

int main () {
    int idade = 17;
    float altura = 1.75;

    //idade >=18 => falso
    //idade <= 30 => verdadeira
    //falso  && verdadeira
    //falso && altura > 1.70
    //falso && verrdadeiro => falso


    if (idade >= 18 && idade <= 30 && altura >1.70){
        printf("Você está na faixa etária e tem alturra adequada");
    } else {
        printf("Você não atende aos critérios\n");
    }

        

    
}