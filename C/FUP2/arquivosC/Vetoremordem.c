#include <stdio.h>

int main () 
{
    int QuantNumeros;scanf ("%d", &QuantNumeros);QuantNumeros++;
    int array [QuantNumeros];
    for(int i = 0; i < QuantNumeros - 1; i++) //mudar Variavel e completar.
    {
        scanf ("%d", &array[i]);
        if (i > 0 && array[i - 1] > array [i]) { printf ("precisa de ajuste\n"); return 0; }
    }
    printf ("ok\n");
}

