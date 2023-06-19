#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct ficha_aluno
{
    int matricula;
    char nome[300];
    int codigodisciplina;
    float nota[2];
    float somaNotas = 0;
    float media;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, j;
    struct ficha_aluno aluno[10];

    for (i = 0; i < 10; i++)
    {

        printf("informe o numero da %d matricula \n", i + 1);
        scanf("%d", &aluno[i].matricula);

        printf("digite o nome do %d aluno \n", i + 1);
        gets(aluno[i].nome);

        printf("informe o codigo da %d disciplina \n", i + 1);
        scanf("%d", &aluno[i].codigodisciplina);

        for (j = 0; j < 2; j++)
        {

            printf("informe a nota do %d aluno \n", j + 1);
            scanf("%2.f", &aluno[i].nota[j]);

            aluno[i].media = somaNotas / 2;
            somaNotas = 0;
        }

        fflush(stdin);
    }

    for (i = 0; i < 10; i++)
    {

        printf("nome do %d aluno \n", aluno[i].nome);
        printf("media final %2.f \n", aluno[i].media);

    }

    return 0;
}