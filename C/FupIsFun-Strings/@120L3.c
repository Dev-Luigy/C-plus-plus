#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    char * texto = malloc(100 * sizeof(char));
    fgets(texto, 100, stdin);
    texto = realloc(texto, strlen(texto));
    int lastspace = 0;
    for (int i = 0 ; i < strlen(texto) - 1; i++)
    {
        if (texto[i] == ' ')
        {
            int y = i + 1;

            while(lastspace < i) 
            {
                //printf("%c e %c\n", texto[lastspace], texto[y]);
                if (texto[lastspace] > texto[y]) { printf ("nao\n"); return 0; }
                else if (texto[lastspace] < texto[y]) { lastspace = i; break; }
                lastspace++, y++;
            };
            lastspace += 1;
            i = y;
        }
    }
    printf ("sim\n");
    free (texto);
}