#include <stdio.h>

int main ()
{
	int Tam, Count = 0, PdJedi = 0, PdSith = 0;
	scanf ("%d", &Tam);
	int array[Tam];
	while (Count < Tam)
	{
		scanf ("%d", &array[Count]);
		if (Count < (Tam/2))
		{
			PdJedi += array[Count];
		}
		else
		{
			PdSith += array[Count];
		}
		Count ++;
	}
	if (PdJedi == PdSith)
	{
		printf ("Empate\n");
	}
	else if (PdJedi > PdSith)
	{
		printf ("Jedi\n");
	}
	else
	{
		printf ("Sith\n");
	}
}

