#include <stdio.h>
    int main(){
        char *nomes[] = {"Axl","Slash","bob"};
        int i;

        for ( i =0; i < 3; i++) {
            printf("%s\n",nomes[i]);
        }
        return 0;
    }
