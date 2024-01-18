#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char * texto = malloc(100 * sizeof(char));
    fgets(texto, 100, stdin);
    texto = realloc(texto, strlen(texto));

    for (int i = 0; i < strlen(texto) - 1; i++)
    {
        short thisLocal = 0;
        short isvogal = texto[i - 1] == 'a' || texto[i - 1] == 'e' || texto[i - 1] == 'i' || texto[i - 1] == 'o' || texto[i - 1] == 'u'; 
        if (texto[i] == ' ' &&  isvogal) 
        {
            thisLocal = i - 1;        
            while(texto[i] == ' ' && texto[i+1] == texto[thisLocal])
            {
                i+=2;
            }
            printf ("%c", texto[i]);
        }
        else printf ("%c", texto[i]);
    }
    printf ("\n");
    free(texto);
}