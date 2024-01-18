#include <stdio.h>

int main ()
{
	int Atualmente = 0, DistSalto, DistRecu, Chegada;
	scanf ("%d %d %d", &Chegada, &DistSalto, &DistRecu);
	while (Atualmente <= Chegada)
	{
		printf ("%d ", Atualmente);
		Atualmente += DistSalto;
		if (Atualmente >= Chegada)
		{
			printf ("saiu\n");
			break;
		}
		else
		{
			printf ("%d\n", Atualmente);
			Atualmente -= DistRecu;
		}
	}
}
