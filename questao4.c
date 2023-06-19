#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct cadastro_pessoa
{

    char nome[300];
    char autor[300];
    char categoria[300];
    float preco;
};

int main()
{

    setlocale(LC_ALL, "portuguese");
    int i;
    struct cadastro_pessoa pessoa[3];

    for (i = 0; i < 3; i++)
    {

        printf("digite o nome do %d livro \n", i + 1);
        gets(pessoa[i].nome);

        printf("digite o autor do %d livro \n", i + 1);
        gets(pessoa[i].autor);

        printf("digite a categoria do %d livro \n", i + 1);
        gets(pessoa[i].categoria);

        printf("digite o valor do %d livro \n", i + 1);
        scanf("%f", &pessoa[i].preco);

        fflush(stdin);
    }

    for (i = 0; i < 3; i++)
    {

        printf("nome do %d livro \n", i + 1);
        printf("nome: %s \n", pessoa[i].nome);
        printf("autor: %s \n", pessoa[i].autor);
        printf("categoria: %s \n", pessoa[i].categoria);
        printf("preco: R$ %.2f \n", pessoa[i].preco);
    }

    return 0;
}
