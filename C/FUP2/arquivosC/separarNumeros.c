#include <stdio.h>

int main () 
{
    int numeros = 0, nextI = 0, NumeroVerdadeiro = 0;
    scanf ("%d", &numeros);
    NumeroVerdadeiro = numeros;
    for(int i = 0; numeros >= 1; i++) //mudar Variavel e completar.
    {
        numeros /= 10;
        nextI++;
    }
    int array[nextI + 1];
    numeros = NumeroVerdadeiro;
    for(int i = 0; numeros >= 1; i++) //mudar Variavel e completar.
    {
        array[i] = numeros % 10;
        numeros /= 10;
    }
    for(int i = nextI - 1; i >= 0; i--) //mudar Variavel e completar.
    {
        i - 1 < 0 ? printf ("%d\n", array[i]) : printf ("%d ", array[i]);
    }
}
