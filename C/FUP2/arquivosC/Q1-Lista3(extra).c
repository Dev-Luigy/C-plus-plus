#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	srand(time(NULL));
	int i = 0, i2 = 0, numero = 0, arrayNumeros[6];
	for (i = 0; i < 6; i++)
	{
		numero = rand() % 61;
		arrayNumeros[i] = numero;
		for (i2 = 0; i2 < i; i2++)
		{
			i -= arrayNumeros[i] == arrayNumeros[i2] ? 1 : 0;
		}
	}
	for (i = 0; i < 6; i++)
	{
		i < 5 ? printf ("%d ", arrayNumeros[i]) : printf ("%d\n", arrayNumeros[i]);
	}
}

