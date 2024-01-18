#include <stdio.h>
#include <string.h>

int main ()
{
    char texto1[100];
    fgets(texto1, 100, stdin); int tamtexto1 = strlen(texto1), countspace = 0;
    int i = 0, i2 = 0;

    for (i = 0; i < tamtexto1; i++)
    {
        if (texto1[i] == ' ') countspace ++;
        if (texto1[i] == '\n') texto1[i] = '\0';
    }

    char * mtexto = strtok(texto1, " ");
    do
    {
        printf ("%s", mtexto);
        printf (" %s", mtexto);
        mtexto = strtok(NULL, " ");
        i2 ++;
        i2 == countspace  + 1 ? printf ("\n") : printf (" ");
    }while (mtexto != NULL);
}