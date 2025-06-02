#include <stdio.h>
 int main(){

/*operador logico && and
    int a = -10, b = -5;

    if ( a> 0 && b>0){
        printf("Os dois numeros sao positivos\n");
    }else {
        printf("Pelo menos um dos numeros é negativo\n");
    }
*/

//Operador logico || Or
/* int a = -10, b = -5;
if ( a> 0 || b>0){
        printf("Pelo menos um dos numeros é positivo\n");
    }else {
        printf("Os dois numeros são negativos\n");
    }
*/
//operador logico ! Not
 /*   int a=0;

    if(!a) { //(!(a>0)
        printf("a variavel a é zero.\n");
        //printf("a não é um numero positivo\n");
    } else {
        printf("A variavel é diferente de zero.\n");
    }
*/
   int a=-10;

    if(!(a>0)) { //(!(a>0)
        printf("a variavel a é negativa.\n");
       
    } else {
        printf("A variavel é positiva\n");
    }



 }