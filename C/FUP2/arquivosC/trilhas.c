#include <stdio.h>

int main () 
{
    int QuantPontos; scanf ("%d", &QuantPontos); QuantPontos++;
    int sNormal = 0, sContrario = 0;
    int aPontos[QuantPontos];
    for(int i = 0; i < QuantPontos - 1; i++) //mudar Variavel e completar.
    {
        scanf ("%d", &aPontos[i]);
        sNormal += i > 0 && aPontos[i] > aPontos[i - 1]? aPontos[i] - aPontos[i - 1] : 0;
        sContrario -= i > 0 && aPontos[i] < aPontos[i - 1]? aPontos[i] - aPontos[i - 1] : 0;
    }
    sNormal <= sContrario ? printf ("%d\n", sNormal) : printf ("%d\n", sContrario);
}