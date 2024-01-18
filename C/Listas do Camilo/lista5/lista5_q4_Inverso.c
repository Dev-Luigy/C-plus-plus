#include <stdio.h>

int main ()
{
	int quantNumeros = 0; scanf ("%d", &quantNumeros);
	int v[quantNumeros]; //Declaração do vetor e sua quantidade de numeros.
	
	int i = 0;
	
	for (i = 0; i < quantNumeros; i++)
	{
		scanf ("%d", &v[i]);
	}
	
	int ordem = 0;
	scanf ("%d", &ordem);
	
	if (ordem == 1)
	{
		for (i = 0; i < quantNumeros; i++)
		{
			i < quantNumeros - 1 ? printf ("%d ", v[i]) : printf ("%d\n", v[i]);
			// se o i for diferente da ultima execução imprime com espaço, se não imprime com quebra de linha.
		}
	}
	
	if (ordem == 2)
	{
		for (i = quantNumeros - 1; i >= 0; i--)
		{
			i != 0 ? printf ("%d ", v[i]) : printf ("%d\n", v[i]);
		}
	}
}
