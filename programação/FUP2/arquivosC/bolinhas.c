#include <stdio.h>

int main () 
{
    int quantNumeros; scanf ("%d", &quantNumeros); quantNumeros++;
    int aNumeros[quantNumeros][3], Maior = 0, varTroca, countMaior, flag;
    // colocando os valores no array;
    for(int i = 0; i <= quantNumeros - 2; i++) //mudar Variavel e completar.
    {
        scanf ("%d", &aNumeros[i][0]);
    }

    for(int i = 1; i <= quantNumeros - 2; i++) //mudar Variavel e completar.
    {
        if (aNumeros[i][0]<aNumeros[i - 1][0])
        {
            varTroca = aNumeros[i][0];
            aNumeros[i][0] = aNumeros[i - 1][0];
            aNumeros[i - 1][0] = varTroca;
            i = 0;
        }
    }

    for(int i = 0; i <= quantNumeros - 2; i++) //mudar Variavel e completar.
    {
        aNumeros[i][1] = 1;
        if (i == 0) { aNumeros[i][1] = 1; Maior = Maior < aNumeros[i][1] ? aNumeros[i][1] : Maior;}
        if (i >= 1 && aNumeros[i][0] == aNumeros[i - 1][0]) 
        { 
            aNumeros[i][1] += aNumeros[i - 1][1];
            Maior = Maior < aNumeros[i][1] ? aNumeros[i][1] : Maior;
        }
        countMaior += aNumeros[i][0] != aNumeros[i - 1][0] ? 1 : 0;
        flag = aNumeros[i][1] == Maior ? aNumeros[i][0] : flag;
    }
    printf ("%d\n", countMaior);
    for(int i = 0; i <= quantNumeros - 2; i++) //mudar Variavel e completar.
    {
        //printf ("%d = %d, %d\n",i , aNumeros[i][1], Maior);
        if (aNumeros[i][1] == Maior && aNumeros[i][0] != flag) {printf ("%d ", aNumeros[i][0]);}
        else if (aNumeros[i][1] == Maior && aNumeros[i][0] == flag) printf ("%d\n", aNumeros[i][0]);
    }
}