#include <stdio.h>

int main () 
{
    int quantNumeros; scanf ("%d", &quantNumeros); quantNumeros++;
    int aNumeros[quantNumeros], total;
    for(int i = 0; i <= quantNumeros - 2; i++) //mudar Variavel e completar.
    {
        scanf ("%d", &aNumeros[i]);
        if (aNumeros[i] == 0) 
        { 
            for(int i2 = 0; i2 < i; i2++) //mudar Variavel e completar.
            {
                if (aNumeros[i2] != 0) { aNumeros[i2] = 0; }
            }
        }
    }
    for(int i = 0; i <= quantNumeros - 2; i++) //mudar Variavel e completar.
    {
        if (aNumeros[i] != 0) total += aNumeros[i];
    }
    printf ("%d\n", total);
}