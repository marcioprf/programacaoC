#include <stdio.h>

int main(){

    int a = 5;
    int b = 10;
    int c = 1;

    // a > 0 => verdadeiro
    // b < 0 => falsa
    // verdadeiro && falso => fallso
    // Verdadeiro ||  c == 0
    //falso || falso => falso

    if( a> 0 && b < 0 || c ==0) {
        printf("A condição é verdadeira\n");
    }else {
        printf("a condição é falsa\n");
    }


}
