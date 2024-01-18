#include <stdio.h>
#include <locale.h>


int main ()
{
	setlocale(LC_ALL, "portuguese");
	int N1, N2, N3, N4, total;
	scanf ("%d",&N1);
	scanf ("%d",&N2);
	scanf ("%d",&N3);
	scanf ("%d",&N4);
	total = N1 + N2 + N3 + N4;
	if (total == 0)
	{
		printf ("nenhum\n");
	}
	else if (total % 4 == 0)
	{
		printf ("jog4\n");
	}
	else if (total % 4 == 1)
	{
		printf ("jog1\n");
	}
		else if (total % 4 == 2)
	{
		printf ("jog2\n");
	}
		else
	{
		printf ("jog3\n");
	}
}
