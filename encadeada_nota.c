#include <stdio.h>

    int main() {
        int nota;

        printf("Digite a sua nota: \n");
        scanf("%d",&nota);

       // A >= 90
       // B >= 80
       // C >= 70
       // D >= 60

        if (nota >= 90) {
            printf("Conceito é A!\n");
        } else if (nota >= 80){
            printf("Conceito é B!\n");
        } else if (nota >= 70){
            printf("Conceito é C!\n");
        } else if (nota >= 60){
            printf("Conceito é D!\n");    
        } else if (nota >= 50){
            printf("Conceito é E!\n");
        } else {
            printf("Conceito é F!\n");
        }    
    }
