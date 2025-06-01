#include <stdio.h>

int main (){
    float temperatura, umidade;
    unsigned int estoque,estoqueMinimo=1000;

    printf("entre com a temperatura: \n");
    scanf("%f",&temperatura);
    printf("entre com a umidade: \n");
    scanf("%f",&umidade);
    printf("Entre com o estoque: \n");
    scanf("%u",&estoque);

    if (temperatura >30){
        printf("temperatura esta alta\n");
    }else {
        printf("a temperatura ta boa mano, dentro dos parametros\n");
    }

    if (umidade>50){
        printf("umidade elevada\n");
    }else{
        printf("umidade está dentro dos paramentros\n");
    }

    if (estoque<estoqueMinimo){
        printf("estoque abaixo do minimo\n");
    }else{
        printf("Estoque normal:\n");
    }



}

