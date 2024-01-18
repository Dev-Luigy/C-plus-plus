#include <stdio.h>

int main () 
{
    int quantNumeros; scanf ("%d", &quantNumeros); quantNumeros++;
    int NumeroAtual = 0, quantNumerosLidos = 0;
    int aNumeros[100],aResposta[quantNumeros];
    for(int i = 0; i < 100; i++) //mudar Variavel e completar.
    {
        aNumeros[i] = 0;
        quantNumerosLidos++;
        if (quantNumerosLidos <= quantNumeros - 1) scanf ("%d", &NumeroAtual);
        aNumeros[NumeroAtual] = NumeroAtual;
    }    
    for(int i = 0; i < 100; i++) //mudar Variavel e completar.
    {
        if (aNumeros[i] != 0)
        i == 99 ? printf ("%d\n", aNumeros[i]) : printf ("%d ", aNumeros[i]);
    }
}