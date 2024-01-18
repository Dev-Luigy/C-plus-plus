#include <stdio.h>

int main () 
{
    int quantBandidos = 0; scanf ("%d", &quantBandidos); quantBandidos++;
    int bandidos[quantBandidos], aBandidos[quantBandidos], numeroAtual = 0, maior = 0;
    int i = 0, counter = 0;
	for(i = 0; i <= quantBandidos - 2 ; i++) //mudar Variavel e completar.
    {
        bandidos[i] = 0;
        scanf ("%d", &bandidos[i]);
        aBandidos[i] = bandidos[i];
        maior = maior < bandidos[i] ? bandidos[i] : maior ;
    }
    i = 0;
    while (counter <= 2) 
    {
        if (i > 0)
        {
            if (bandidos[i] < bandidos[i - 1]) bandidos[i - 1] = bandidos[i], bandidos[i] = aBandidos[i - 1], aBandidos[i] = bandidos[i], aBandidos[i - 1] = bandidos[i - 1];
		}
		i++;
		if (bandidos[quantBandidos - 2] == maior) counter++, i = 0;
    }
    i = quantBandidos - 2;
    counter = 0;
    while (counter <= 2) 
    {
        if (i <= quantBandidos - 1 && i >= 0)
        {
            if (bandidos[i] > bandidos[i + 1]) bandidos[i + 1] = bandidos[i], bandidos[i] = aBandidos[i + 1], aBandidos[i] = bandidos[i], aBandidos[i + 1] = bandidos[i + 1];
		}
		i++;
		if (i == 0) counter++, i = quantBandidos - 2;
    }
    
    for(i = 0; i <= quantBandidos - 2; i++) //mudar Variavel e completar.
    {
        if (bandidos[i] != 0 && bandidos[i] != maior) printf ("%d ", aBandidos[i]);
        if (bandidos[i] == maior) printf ("%d\n", aBandidos[i]);
    }
}
