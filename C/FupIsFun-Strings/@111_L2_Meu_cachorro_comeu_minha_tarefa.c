#include <stdio.h>
#include <string.h>

int main ()
{
    char texto[100]; fgets(texto, 100, stdin);
    int i2,i = i2 = 0;
    int tamTexto = strlen(texto);
    while(texto[i] != '\n'){
        if (i > 0 && (texto[i - 1] == ' ' || texto[i - 1] == '\0') && texto[i] == ' ')
        {
            texto[i] = '\0';
        }
        i++;
    }

    for (i = 0; i < tamTexto; i++)
    {
        if (texto[i] != '\0') printf ("%c", texto[i]);
    }
}