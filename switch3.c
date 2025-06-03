#include <stdio.h>
    int main(){

        int dia;
        printf("Entre o valor do dia!\n");
        scanf("%d",&dia);

        /*
        if (dia == 1) {
            printf("Domingo");
        } else if (dia == 2) {
            printf("Segunda-feira\n");
        } else if (dia == 3) {
            printf("Terça-feira\n");
        } else if (dia == 4) {
            printf("Quarta-feira\n");
        } else if (dia == 5) {
            printf("Quinta-feira\n");
        } else if (dia == 6) {
            printf("Sexta-feira\n");
        } else if (dia == 7) {
            printf("Sabado\n");
        }
        */
       switch (dia) {
        case 1:
            printf("domingo\n");
        case 2: 
            printf("Segunda-feira\n");   
        break;
        case 3: 
            printf("Terça-feira\n");   
        break;
        case 4: 
            printf("Quarta-feira\n");   
        break;
        case 5:
            printf("Quinta-feira\n");    
        break;
        case 6:  
            printf("Sexta-feira\n");  
        break;
        case 7:  
            printf("Sabado\n");  
        break;
       default:
            printf("Valor invalido\n");
        break;
       }


    }