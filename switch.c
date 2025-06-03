#include <stdio.h>

int main(){

    int variavel;

    printf("Digite um valor\n");
    scanf("%d",&variavel);
    
    switch (variavel) {
        case 1:
            printf("codigo a ser executado se variavel ==1\n");
        break;
        case 2:
            printf("codigo a ser executado se variavel ==2\n"); 
        break;
        default:
            printf("codigo a ser executado se a variavel não for 1 o 2\n");
             
    }


}