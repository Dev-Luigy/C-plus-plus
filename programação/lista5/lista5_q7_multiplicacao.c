#include <stdio.h>

int main ()
{
	int quantNumeros = 0; scanf ("%d", &quantNumeros);
	int a[quantNumeros], b[quantNumeros]; //Declaração do vetor e sua quantidade de numeros.
	
	int i = 0, x = 0;
	for (i = 0; i < quantNumeros; i++)
	{
		scanf ("%d", &a[i]);
	}
	
	scanf ("%d", &x); // valor de x;
	
	for (i = 0; i < quantNumeros; i++)
	{
		b[i] = a[i] * x; // faz a multiplicação.
		i < quantNumeros - 1 ? printf ("%d ", b[i]) : printf ("%d\n", b[i]);
	}
}
