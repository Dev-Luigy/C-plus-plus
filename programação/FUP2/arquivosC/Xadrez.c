#include <stdio.h>
#include <math.h>

int main ()
{
	int C, L, somaLC;
	scanf ("%d %d", &C, &L);
	somaLC = C + L;
	if (somaLC % 2 == 0)
	{
		printf ("1\n");
	}
	else
	{
		printf ("0\n");
	}
}
