#include <stdio.h>

int main () 
{
    int quantNumeros = 0; scanf ("%d", &quantNumeros); quantNumeros++;
    int aNumeros[quantNumeros], counter = 0;
    for(int i = 0; i <= quantNumeros - 2; i++) //mudar Variavel e completar.
    {
        aNumeros[i] = 100;
        aNumeros[i + 1] = 100;
        scanf ("%d", &aNumeros[i]);
    }
    for(int i = 0; i <= quantNumeros - 2; i++) //mudar Variavel e completar.
    {
        if (i == 0)
        {
            if (aNumeros[i] == 0 && aNumeros[i + 1] != 1) counter ++;
        }
        if (i > 0)
        {
            if (aNumeros[i] == 0 && (aNumeros[i + 1] != 1 && aNumeros[i - 1] != 1)) counter ++;
            else if (i == quantNumeros - 2 && aNumeros[i] == 0 && aNumeros[i - 1] == 0) counter++;
            //printf ("\n%d = %d %d %d: %d\n",i,  aNumeros[i - 1], aNumeros[i], aNumeros[i + 1], counter);
        }
    }
    printf ("%d\n", counter);
}