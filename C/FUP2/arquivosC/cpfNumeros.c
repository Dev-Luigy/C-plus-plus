#include <stdio.h>

int main ()
{
	int QuantNumeros = 0, i = 0; scanf ("%d", &QuantNumeros); QuantNumeros ++;
	int ANumeros[QuantNumeros];
	for (i = 0; i < QuantNumeros - 1; i++)
	{
		scanf ("%d", &ANumeros[i]);
	}
	if (ANumeros[0] == 0 && ANumeros[1] == 0 && ANumeros[2] == 0)
	{
		printf ("0");
	}
	else
	{
		for (i = 0; i < QuantNumeros - 1; i++)
		{
			printf ("%d", ANumeros[i]);
		}
	}
	printf ("\n");
}
