#include <stdio.h>

int scanVetor (int *array, int n) // função para extrair os valores dos vetores.
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf ("%d", &array[i]);
	}
	return array;
}

int main ()
{
	int quantNumeros = 10;
	int at[quantNumeros];
	int c[quantNumeros];

	int * a = scanVetor(at, quantNumeros);
	int * b = scanVetor(at, quantNumeros);
	
	int i = 0;
	for (i = 0; i < quantNumeros; i++)
	{
		c[i] = a[i] * b[i];
		i < quantNumeros - 1 ? printf ("%d ",c[i]) : printf ("%d\n",c[i]);
	}
}
