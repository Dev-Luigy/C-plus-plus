#include <stdio.h>

int main ()
{
	float n1, n2;
	char tipo[1];
	scanf ("%d %c %d", &N1, tipo, &N2);
	if (N1 > N2 && tipo[0] == 'm')
	{
		printf ("segundo\n");
	}
	else if (N1 > N2 && tipo[0] == 'M')
	{
		printf ("primeiro\n");
	}
	else if (N1 < N2 && tipo[0] == 'm')
	{
		printf ("primeiro\n");
	}
	else if (N1 < N2 && tipo[0] == 'M')
	{
		printf ("segundo\n");
	}
}
