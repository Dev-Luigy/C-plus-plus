#include <stdio.h>

int main ()
{
    int quantNumeros = 0; scanf ("%d", &quantNumeros);
    int aNumeros[quantNumeros];
    int i = 0, total = 0;

    for (i = 0; i < quantNumeros; i++)
    {
        scanf ("%d", &aNumeros[i]);
        total += aNumeros[i];
        if (total >= 1000000) { printf ("\n%d\n", ++i); break; }
    }
}