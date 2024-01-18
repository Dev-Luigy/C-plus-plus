#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int quantNumeros = 0; scanf ("%d", &quantNumeros);
	int v[quantNumeros]; //Declaração do vetor e sua quantidade de numeros.
	
	int i = 0;
	
	for (i = 0; i < quantNumeros; i++)
	{
		scanf ("%d", &v[i]);
	}
	
	for (i = 1; i < quantNumeros; i++)
	{
		if (v[i] >= 0 && v[i - 1] >= 0) printf ("%d ", abs (v[i] - v[i - 1]));
		else { printf ("%d ", abs(v[i]) + abs(v[i - 1])); }
	}
}
