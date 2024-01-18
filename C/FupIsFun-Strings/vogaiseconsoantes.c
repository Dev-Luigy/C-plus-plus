#include <stdio.h>
#include <string.h>

int main ()
{
    char vogais[] =  {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    char texto[100];
    
    short isVogal = 0;

    fgets(texto, 100, stdin);

    for (int i = 0; i < strlen(texto) - 1; i++)
    {
        for (int j = 0; j < 10; j++) 
        {
            if (texto[i] == vogais[j]) { printf ("v"); isVogal = 1; break; }
        }
        if (isVogal == 1) { isVogal = 0; continue; };
        if (texto[i] == ' ') { printf (" "); continue; }
        printf ("c");
    }
    printf("\n");
}