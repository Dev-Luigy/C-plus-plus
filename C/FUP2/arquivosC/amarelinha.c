#include <stdio.h>

int main ()
{
    int numeroJogadas = 0, intervalo[3], contadorAcertos = 0;
    scanf ("%d", &numeroJogadas); 
    for (int i = 0; i < 2; i ++) { scanf ("%d", &intervalo[i]); }
    numeroJogadas ++;
    int jogadas[numeroJogadas];
    for (int i = 0; i < numeroJogadas - 1; i ++)
    {
        scanf ("%d", &jogadas[i]);
        contadorAcertos += jogadas[i] <= intervalo[1] && jogadas[i] >= intervalo[0] ? 1 : 0 ;
    }
    printf ("%d\n", contadorAcertos);
}