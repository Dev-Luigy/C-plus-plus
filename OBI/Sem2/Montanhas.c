#include <stdio.h>

int main ()
{
    int quantNumeros = 0; scanf ("%d ", &quantNumeros);
    int aNumeros[quantNumeros];
    int i = 0, maior = 0, count = 0;

    for (i = 0; i < quantNumeros; i++)
    {
        scanf ("%d", &aNumeros[i]);
        maior = maior > aNumeros[i] ? maior : aNumeros[i];
    }

    for (i = 1; i < quantNumeros; i++)
    {
        count += aNumeros[i] == maior && aNumeros[i - 1] != maior && aNumeros[i + 1] != maior ? 1 : 0;
    }  
    count == 1 ? printf ("N\n") : printf ("S\n");
}