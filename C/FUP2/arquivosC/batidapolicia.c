#include <stdio.h>

int main () 
{
    int quantBandidos = 0; scanf ("%d", &quantBandidos); quantBandidos++;
    int bandidos[quantBandidos], aBandidos[quantBandidos], numeroAtual = 0, maior = 0;
    int i = 0, counter = 1;
	for(i = 0; i <= quantBandidos - 2 ; i++) //mudar Variavel e completar.
    {
        bandidos[i] = 0;
        scanf ("%d", &bandidos[i]);
        aBandidos[i] = bandidos[i];
    }
    while (counter >= 1)
    {
        for(int i = 0; i <= quantBandidos - 2; i++) //mudar Variavel e completar.
        {
            if (i > 0)
            {
                if (bandidos[i] < bandidos[i - 1]) counter ++, bandidos[i - 1] = bandidos[i], bandidos[i] = aBandidos[i - 1], aBandidos[i] = bandidos[i], aBandidos[i - 1] = bandidos[i - 1];
            }
        }
        counter --;
    }
    for(int i = 0; i <= quantBandidos - 2; i++) //mudar Variavel e completar.
    {
        if (i != quantBandidos - 2) printf ("%d ", bandidos[i]);
        if (i == quantBandidos - 2) printf ("%d\n", bandidos[i]);
    }
}