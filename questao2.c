#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct informacoes_pessoa
{

    char nome[300];
    int idade;
    float peso;
    float altura;
};

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;
    struct informacoes_pessoa pessoa[5];

    for (i = 0; i < 5; i++)
    {

        printf("digite o nome da %d pessoa \n", i + 1);
        gets(pessoa[i].nome);

        printf("digite a idade da %d pessoa \n", i + 1);
        scanf("%d", &pessoa[i].idade);

        printf("digite o peso da %d pessoa \n", i + 1);
        scanf("%f", &pessoa[i].peso);

        printf("digite a altura da %d pessoa \n", i + 1);
        scanf("%f", &pessoa[i].altura);

        fflush(stdin);
    }

    for (i = 0; i < 5; i++)
    {

        printf("nome da %d pessoa \n", i + 1);
        printf("nome: %s \n ", pessoa[i].nome);
        printf("idade: %d \n ", pessoa[i].idade);
        printf("peso: %.1f kgs. \n ", pessoa[i].peso);
        printf("altura: %.2f m. \n ", pessoa[i].altura);
    }

    return 0;
}
