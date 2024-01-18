#include <stdio.h>

int main ()
{
	int quantNumeros = 20, maior = 0;
	float v[quantNumeros]; //Declaração do vetor e sua quantidade de numeros.
	
	int i = 0, x = 0;
	for (i = 0; i < quantNumeros; i++)
	{
		scanf ("%f", &v[i]);
		maior = maior > v[i] ? maior : v[i];
	}
	
	for (i = 0; i < quantNumeros; i++)
	{
		i < quantNumeros - 1 ? printf ("%.3f ", v[i]/maior) : printf ("%.3f\n", v[i]/maior);
	}
}
