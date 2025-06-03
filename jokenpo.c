#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0)); // inicializa o gerador de numeros aleatoreos

    printf("Jogo do Jokenpô\n");
    printf("Escolha uma opção\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 +1;// rand escolhe um numero 5resto divisivel porr 3 que da 0 , soma mais 1 pra dar opção de 1 2 e 3

    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: pedra - ");   
        break;
    case 2:
        printf("Jogador: papel - ");   
        break;
    case 3:
        printf("Jogador: tesoura - ");
        break;
    
    default:
    printf("Opção invalida");
        break;
    }

    switch (escolhaComputador)
    {
    case 1:
        printf("Computador: pedra \n");   
        break;
    case 2:
        printf("Computador: papel \n");   
        break;
    case 3:
        printf("Computador: tesoura \n");
        break;
    }

        if (escolhaComputador == escolhaJogador) 
        {
            printf("#### Jogo EMpatou! ####\n");
        } else if((escolhaJogador == 1) && (escolhaComputador == 3) ||
                    (escolhaJogador == 2) && (escolhaComputador == 1) ||
                    (escolhaJogador ==  3) && (escolhaComputador == 2))
        {
            printf("### Parabens você ganhou! ###\n");
        } else {
            printf("Você perdeu!\n");
        }

    return 0;
}