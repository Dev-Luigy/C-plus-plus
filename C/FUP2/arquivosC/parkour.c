#include <stdio.h>

int main () 
{
    int quantNumeros; scanf ("%d", &quantNumeros); quantNumeros++;
    int total = 0;
    int aNumeros[quantNumeros];
    for(int i = 0; i <= quantNumeros - 2; i++) //mudar Variavel e completar.
    {
        scanf ("%d", &aNumeros[i]);
        if (i > 0) 
        {
            if (aNumeros[i - 1] - aNumeros[i] >= 2 || aNumeros[i - 1] - aNumeros[i] <= -2)
            {
                total++;
            }
        }
    }
    printf ("%d\n", total);
}