#include <stdio.h>

int main () 
{
    int quantNumeros; scanf ("%d", &quantNumeros); quantNumeros++;
    int aNumeros[quantNumeros][3], Maior = 0;
    for(int i = 0; i <= quantNumeros - 2; i++) //mudar Variavel e completar.
    {
        aNumeros[i][1] = 1;
        scanf ("%d", &aNumeros[i][0]);
        if (i == 0) { aNumeros[i][1] = 1; }
        if (i >= 1 && aNumeros[i][0] == aNumeros[i - 1][0]) 
        { 
            aNumeros[i][1] += aNumeros[i - 1][1];
            Maior = Maior < aNumeros[i][1] ? aNumeros[i][1] : Maior;
        }
    }
    printf ("[ ");
    for(int i = 0; i <= quantNumeros - 2; i++) //mudar Variavel e completar.
    {
        printf ("%d = %d, %d\n",i , aNumeros[i][1], Maior);
        if (aNumeros[i][1] == Maior) {printf ("%d ", aNumeros[i][0]);}
    }
    printf ("]");
}