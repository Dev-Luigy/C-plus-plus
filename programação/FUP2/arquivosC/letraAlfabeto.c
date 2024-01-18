#include <stdio.h>

int main ()
{
	int A, constante;
	scanf ("%d", &A);
	if (A == 0)
	{
		printf ("joguem de novo\n");
		exit(0);
	}
	A = A % 26 == 0 ? 96 + 26 : (A % 26) + 96;
	if (A != 0)
	{
		printf ("%c\n", A);
	}
}
