#include <stdio.h>

int main(){
    char produtaA[30] = "Produto A";
    char produtaB[30] = "Produto B";
    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;
    float valorA = 10.50;
    float valorB = 20.40;
    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;
    double valorTotalA;
    double valorTotalB;

    int resultadoA,resultadoB;
    
    printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n ",produtaA,estoqueA,valorA);
    printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n ",produtaB,estoqueB,valorB);

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoA = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque minimo %d\n", produtaA, resultadoA);
    printf("O produto %s tem estoque minimo %d\n", produtaB, resultadoB);

    printf("O valor total de A(R$ %.2f)é maior que o valor total de B (R$ %.2f): %d\n",estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA )>(estoqueB * valorB));




}
