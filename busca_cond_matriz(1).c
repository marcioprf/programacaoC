#include <stdio.h>
#define LINHA 10 // nao prrrecisa ter ponto e virgula
#define COLUNA 10
 
int main() {
    int matriz[LINHA][COLUNA];
    int target = 90;
    int found = 0;
    int soma = 1;

    for (int i = 0; i < 10; i++) {      // Loop externo para as linhas
        for (int j = 0; j < 10; j++) {  
            matriz[i][j] = soma;
            soma++;
            printf(" %d",matriz[i][j]);
        }
        printf("\n");
    }          
    // Busca condicional do elemento alvo
    for (int i = 0; i < LINHA; i++) {      // Loop externo para as linhas
        for (int j = 0; j < COLUNA; j++) {  // Loop interno para as colunas
            if (matriz[i][j] == target) {
                printf("O valor %d encontrado no indice (%d, %d)\n", target, i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
 
    if (!found) {
        printf("Elemento %d não encontrado na matriz\n", target);
    }
 
    return 0;
}