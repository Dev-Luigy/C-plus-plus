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

void proctexto(char * texto, char * procTexto, char * sub)
{
    int count, flag = count = 0;    
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
            if (count == strlen(procTexto) - 1 || count == strlen(procTexto)) { printf ("%s", sub); flag = 1; }
            else printf ("%c", texto[i]);
        }
        else { if (flag == 1) { printf ("%c", texto[++i]); flag = 0; } else printf ("%c", texto[i]); }
    }
}

int main ()
{
    char * texto = retornarArrayChar(100);
    char * proc = retornarArrayChar(20);
    char * sub = retornarArrayChar(20);
    sub[strlen(sub) - 1] = '\0';
    proctexto(texto, proc, sub);
    free(sub);
    free(texto);
    free(proc);
}