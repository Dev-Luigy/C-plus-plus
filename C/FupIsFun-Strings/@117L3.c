#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float verificaUltron (const char * DNA, const char * Pessoa)
{
    int count = 0;
    for (int i = 0; i < strlen(DNA) - 1; i++)
    {
        for (int y = 0; y < strlen(Pessoa) - 1; y++)
        {
            if (Pessoa[y] == DNA[i]) {count ++; break;}
        }
    }
    return count;
}

char * criarraychar()
{
    char * const texto = malloc (100 * sizeof(char));
    fgets(texto, 100, stdin);
    return texto;
}

int main ()
{
    int quantTestes = 0; scanf ("%d", &quantTestes); fgetc(stdin);
    while (quantTestes--)
    {
        char * Pessoa = criarraychar();
        char * DNA = criarraychar();
        float y = verificaUltron(DNA, Pessoa) / (strlen(DNA) - 1);
        if (y <= 0.5) printf ("pessoa\n");
        else if (y == 1) printf ("chefe\n");
        else printf ("ultron\n");
        //printf ("%.2f\n", y);
        free(Pessoa);
        free(DNA);
    }
}