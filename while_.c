#include <stdio.h>

int main(){
    int i=0;
    while (i <=10) {
        if(i % 2 != 0) // condição para detctar o resto da divisão como par com == fica par
        {
            printf("O numero %d é par!\n",i);
        }

        i++; // para evitar loop infinito da condição while
    }

    return 0;
}
