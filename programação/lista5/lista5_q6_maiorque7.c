#include <stdio.h>

int main ()
{
	int quantNumeros = 0; scanf ("%d", &quantNumeros);
	float v[quantNumeros]; //Declaração do vetor e sua quantidade de numeros.
	
	int i = 0, count = 0;
	
	for (i = 0; i < quantNumeros; i++)
	{
		scanf ("%f", &v[i]);
		count += v[i] >= 7 ? 1 : 0;
	}
	printf ("%d", count);
}
