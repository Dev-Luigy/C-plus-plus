#include <stdio.h>

int main () 
{
    long int QuantPontos, QuantJogadores; scanf ("%ld %ld", &QuantJogadores, &QuantPontos); QuantPontos++; QuantJogadores++;
    long int sNormal = 0, sContrario = 0, Menor = 100, MenorId = 100;
    long int aPontos[QuantJogadores][QuantPontos], aResultados[QuantJogadores];
    for(int i = 0; i < QuantJogadores - 1; i++)
    {
        if (i != 0) { scanf ("%ld", &QuantPontos); QuantPontos++; }
        for(int i2 = 0; i2 < QuantPontos - 1; i2++)
        {
            if (i2 == 0) { sNormal = 0; sContrario = 0; }
            scanf ("%ld", &aPontos[i][i2]);
            sNormal += i2 > 0 && aPontos[i][i2] > aPontos[i][i2 - 1] ? aPontos[i][i2] - aPontos[i][i2 - 1] : 0;
            sContrario -= i2 > 0 && aPontos[i][i2] < aPontos[i][i2 - 1] ? aPontos[i][i2] - aPontos[i][i2 - 1] : 0;
            if (i2 + 1 == QuantPontos - 1) { aResultados[i] = sNormal <= sContrario ? sNormal : sContrario; }
        }
    }
    for(int i = 0; i < QuantJogadores - 1; i++) //mudar Variavel e completar.
    {
        if (Menor > aResultados[i]) { Menor = aResultados[i]; MenorId = i; }
    }
    printf ("%ld\n", MenorId + 1);
}