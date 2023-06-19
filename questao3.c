#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct informacoes_endereco
{

    char nome[300];
    char endereco[300];
    int idade;
};

int main()
{

    setlocale(LC_ALL, "portuguese");

    struct informacoes_endereco cadastro;

    printf("digite seu nome \n");
    gets(cadastro.nome);

    printf("digite seu endereco \n");
    gets(cadastro.endereco);

    printf("digite sua idade \n");
    scanf("%d", &cadastro.idade);




    printf("nome %s \n", cadastro.nome);

    printf("endereco %s \n", cadastro.endereco);

    printf("idade %d \n", cadastro.idade);

    return 0;
}
