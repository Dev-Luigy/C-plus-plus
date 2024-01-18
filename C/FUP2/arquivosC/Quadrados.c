#include <stdio.h>

int main ()
{
	int Count = 0, Entrada, Valor = 0;
	scanf ("%d", &Entrada);
	int Array[Entrada];
	while (Count < Entrada/2)
	{
		if (Count * Count == Entrada)
		{
			Valor = Count * Count;
			printf ("sim\n");
			break;
		}
		Count ++;
	}
	if (Valor != Entrada)
	{
		printf ("nao\n");
	}
}
