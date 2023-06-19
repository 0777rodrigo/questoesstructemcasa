#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct informacoes_pessoa
{

    char nome[300];
    int idade;
    int peso;
    float altura;
};

int main()
{

    setlocale(LC_ALL, "portuguese");

    struct informacoes_pessoa pessoa;

    printf("digite seu nome \n");
    gets(pessoa.nome);

    printf("digite sua idade \n");
    scanf("%d ", &pessoa.idade);

    printf("digite seu peso \n");
    scanf("%f ", &pessoa.peso);

    printf("digite sua altura \n");
    scanf("%f ", &pessoa.altura);

    printf("nome %s \n ", pessoa.nome);
    printf("idade %d \n ", pessoa.idade);
    printf("peso %.1f kgs. \n ", pessoa.peso);
    printf("altura %.2f m. \n ", pessoa.altura);

    return 0;
}
