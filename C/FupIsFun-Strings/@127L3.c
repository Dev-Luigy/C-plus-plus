#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * retornarArrayChar(int tamanho)
{
    char * texto = malloc(tamanho * sizeof(char));
    fgets(texto, tamanho, stdin);
    texto = realloc(texto, strlen(texto) + 1);
    return texto;
}

int proctexto(char * texto, char * procTexto)
{
    int count, total = count = 0;
    for (int i = 0; i < strlen(texto); i++)
    {
        if (texto[i] == procTexto[0]) 
        { 
            count = 0;
            for(int y = 0; y < strlen(procTexto); y++) 
            {
                if (texto[y + i] == procTexto[y]){ count ++; }
                else break;
            }
            if (count == strlen(procTexto) - 1 || count == strlen(procTexto)) total++;
        }
    }
    return total;
}

int main ()
{
    char * texto = retornarArrayChar(100);
    char * proc = retornarArrayChar(20);

    printf ("%d\n", proctexto(texto, proc));
    free(texto);
    free(proc);
}