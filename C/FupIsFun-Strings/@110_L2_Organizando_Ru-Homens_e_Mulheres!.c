#include <stdio.h>
#include <string.h>

char imprimirMatriz (const char * array, int quantidade)
{
    for (int i = 0; i < quantidade; i++)
    {
        printf ("%c", array[i]);
    }
    printf("\n");
}

int main ()
{
    char texto[100], homens[100], mulheres[100];
    char vogais[] = {'a','e', 'i', 'o', 'u'};
    fgets(texto, 100, stdin);
    int isvogal, atualHomem, atualMulher = atualHomem = 0;
    for (int i = 0; i < strlen(texto) - 1; i++)
    {
        isvogal = 0;
        for (int i2 = 0; i2 < 5; i2++)
        {
            if (texto[i] == vogais[i2])
            {
                isvogal = 1;
                mulheres[atualMulher++] = texto[i];
                break;
            }
        }
        if (!isvogal && (texto[i] >= 97 && texto[i] <= 122) || (texto[i] >= 65 && texto[i] <= 90)) homens[atualHomem++] = texto[i];
    }

    for (int i = 0; i < atualHomem; i++)
    {
        printf ("%c", homens[i]);
    }
    printf("\n");

    for (int i = 0; i <= atualMulher; i++)
    {
        printf ("%c", mulheres[i]);
    }
    printf("\n");
}