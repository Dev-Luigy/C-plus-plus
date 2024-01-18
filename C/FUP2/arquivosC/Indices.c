#include <stdio.h>

int main () 
{
    int quantNumeros; scanf ("%d", &quantNumeros); quantNumeros ++;
    int aNumeros[quantNumeros][3];
    int countIndice = 0, varTroca;
	int i;
    for(i = 0; i <= quantNumeros - 2; i++) //mudar Variavel e completar.
    {
        scanf ("%d", &aNumeros[i][0]); //1º i = Valor, 2º i = Pos.
        aNumeros[i][1] = countIndice++;
    }
    for(i = 0; i <= quantNumeros - 2; i++) //mudar Variavel e completar.
    {
        if (i > 0)
        {
            if (aNumeros[i - 1][0] > aNumeros[i][0])
            {
                varTroca = aNumeros[i - 1][0];
                aNumeros[i - 1][0] = aNumeros[i][0];
                aNumeros[i][0] = varTroca;
                varTroca = aNumeros[i - 1][1];
                aNumeros[i - 1][1] = aNumeros[i][1];
                aNumeros[i][1] = varTroca;
                i = 0;
            }
        }
    }
    printf ("[ ");
    for(i = 0; i <= quantNumeros - 2; i++) //mudar Variavel e completar.
    {
        i == quantNumeros - 2 ? printf ("%d ]\n", aNumeros[i][1]) : printf ("%d ", aNumeros[i][1]);
    }
}