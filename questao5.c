#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct informacoes_aluno
{
    char nome[300];
    int matricula;
    float nota[3];
    float media;
};

char *situacao(float media)
{
    if (media >= 6)

        return "aprovado";
}
else
{
    return "reprovado";
}
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, j;
    float maiornota1 = 0, menornota = 0, maiormedia = 0, menormedia = 0, somanotas = 0;
    struct informacoes_aluno aluno[5];

    for (i = 0; i < 5; i++)
    {

        printf("digite o nome do %d aluno \n", i + 1);
        gets(aluno[i].nome);

        printf("digite a matricula do aluno %d \n", i + 1);
        scanf("%d", &aluno[i].matricula);

        for (j = 0; j < 3; j++)
        {
            do
            {

                printf("digite a nota do %d aluno \n", j + 1);
                scanf("%f", &aluno[i].nota[j]);

            } while (aluno[i].nota[j] < 0 || aluno[i].nota[j] > 10);

            somanotas += aluno[i].nota[j];
        }

        aluno[i].media = somanotas / j;
        somanotas = 0;

        if (aluno[i].nota[0] > maiornota1)
        {
            maiornota1 = aluno[i].nota[0];
        }
        if (aluno[i].media > maiormedia)
        {
            maiormedia = aluno[i].media;
        }
        if (aluno[i].media < menormedia)
        {
            menormedia = aluno[i].media;
        }

        fflush(stdin);
    }
    printf("maior nota da primeira prova %f \n", maiornota1);
        printf("maior media geral %f \n", maiormedia);
    printf("menor media geral %f \n", menormedia);

    for (i = 0; i < 5; i++)
    {
printf("nome do aluno %s \n");
    }

    return 0;
}