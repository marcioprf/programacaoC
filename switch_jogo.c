#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao, regras;
    int numeroSecreto, palpite;

        printf("Menu Principal\n");
        printf("1. Iniciarr Jogo\n");
        printf("2. Ver regras\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                srand(time(0));// crria numero aleatorio
                numeroSecreto = rand() % 10; // rand captura numer
                printf("Digite um numerro de 0 a 9\n");
                scanf("%d", &palpite);
                if (numeroSecreto == palpite) {
                    printf("tu acertou cara\n");
                    printf("Numero secreto %d\n", numeroSecreto);
                } else {
                    printf("Você errou\n");
                    printf("Numero secreto %d\n", numeroSecreto);
                }
                break;

            case 2:
                printf("As regras são...\n");
                printf("Digite a opção relacionada as regras do jogo\n");
                scanf("%d", &regras);
                switch (regras)
                {
                case 1:
                    printf("Regra 1\n");
                    break;
                case 2:
                    printf("Regra 2\n");
                
                
                }
                break; 
            case 3:
                printf("Saindo do jogo\n");
                break;
            default:
                printf("Opção invalida!\n");
                break;                      
            
        }




}