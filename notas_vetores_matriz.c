#include <stdio.h>

    int main(){

        int index;

        char *nomesAlunos [3][3] = {
            {"Aluno 0","Pt: 30","Mat: 90"},
            {"Aluno 1","Pt: 60","Mat: 60"},
            {"aluno 2","Pt: 90","Mat: 30"}
        };

        printf("digite o numerro do aluno que queira verr as notas...\n");
        printf("Para o aluno 0, digite 0\n");
        printf("Para o aluno 1, digite 1\n");
        printf("Para o aluno 2, digite 2\n");

        scanf("%d", &index);
        printf("As notas do %s são %s , %s\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);


        return 0;
    }
