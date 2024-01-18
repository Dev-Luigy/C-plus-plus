#include <stdio.h>

int main ()
{
	int Atualmente = 0, DistSalto, DistRecu, Chegada, Count = 0;
	scanf ("%d %d %d", &Chegada, &DistSalto, &DistRecu);
	while (Atualmente <= Chegada)
	{
		printf ("%d ", Atualmente);
		Atualmente += DistSalto - Count * 10;
		if (Atualmente >= Chegada)
		{
			printf ("saiu\n");
			break;
		}
		if (Atualmente <= 0)
		{
			printf ("morreu\n");
			break;
		}
		else
		{
			printf ("%d\n", Atualmente);
			Atualmente -= DistRecu;
		}
		Count ++;
	}
}
