#include <stdio.h>
#define linhas 5 //constante valor definido evita digitar valor 
#define colunas 5

int main(){

    int matriz [linhas] [colunas];
    int soma = 0;

    for(int i =0; i < linhas;i++){
        for(int j=0; j<colunas;j++){
            soma++;//adiciona valkor na soma
            matriz[i][j] = soma;
            printf(" %d",matriz[i][j]);
            
        }
        printf("\n");
    }


    return 0;
}