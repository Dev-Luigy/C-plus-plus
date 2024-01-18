#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct livro
{
    char titulo[30];
    char ISBN[15];
    char autor[30];
    int ano;
    int numPaginas;
} Livro;

void setLivro (Livro * p)
{
    printf ("Digite o Titulo do Livro: \n");
    fgets(p->titulo, 29, stdin);
    printf ("Digite o ISBN: \n");
    fgets(p->ISBN, 14, stdin);
    printf ("Digite o nome do Autor: \n");
    fgets(p->autor, 29, stdin);
    printf ("Digite o ano de publicação: \n");
    scanf ("%d", &p->ano);
    printf ("Digite o numero de páginas: \n");
    scanf ("%d", &p->numPaginas);
    fgetc(stdin);
    printf ("\n");
}

void getLivro (Livro * p)
{
    printf ("Titulo do Livro: \n%s\n", p->titulo);
    printf ("ISBN: \n%s\n", p->ISBN);
    printf ("nome do Autor: \n%s\n", p->autor);
    printf ("ano de publicação: \n%d\n\n", p->ano);
    printf ("numero de páginas: \n%d\n\n", p->numPaginas);
}

int main ()
{
    Livro * Estante1 = (Livro *) malloc (sizeof(Livro) * 3);
    Livro * Maior = NULL;
    for (int i = 0; i < 3; i++)
    {
        setLivro(&Estante1[i]);
        if (i == 0)
        {
            Maior = &Estante1[i];
        }
        else
        {
            Maior = Estante1[i].numPaginas > Maior->numPaginas ? &Estante1[i] : Maior;
        }
    }

    printf ("\nMaior livro: \n");
    getLivro(Maior);

}