#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    // maiusc == 65 á 90 ; minusc = 97 á 122.
    char texto[100]; fgets(texto, 100, stdin); int tamtexto = strlen(texto);
    texto[tamtexto - 1] = '\0'; //transforma o enter no final em vazio.
    int i = 0;

    for (i = 0; i < tamtexto; i++)
    {
        if (texto[i] >= 65 && texto[i] <= 90) texto[i] = tolower(texto[i]);
        else if (texto[i] >= 97 && texto[i] <= 122) texto[i] = toupper(texto[i]);
        printf ("%c", texto[i]);
    }
    printf("\n");
}