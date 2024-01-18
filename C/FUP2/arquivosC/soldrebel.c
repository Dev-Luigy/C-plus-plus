#include <stdio.h>

int main ()
{
	int Count = 1, Tam, PdRebeldes = 0, PdSoldados = 0;
	scanf ("%d", &Tam);
	int Array[Tam];
	while (Count <= Tam)
	{
		scanf ("%d", &Array[Count]);
		if (Array[Count] % 2 == 0)
		{
			PdRebeldes += Array[Count];
		}
		else
		{
			PdSoldados += Array[Count];
		}
		Count++;
	}
	//printf ("%d reb, %d sol\n", PdRebeldes, PdSoldados);
	if (PdRebeldes == PdSoldados)
	{
		printf ("empate\n");
	}
	else if (PdRebeldes > PdSoldados)
	{
		printf ("rebeldes\n");
	}
	else
	{
		printf ("soldados\n");
	}
}
