#include <stdio.h>

int main ()
{
	int A, B, Total;
	float fA, fB, fTotal;
	scanf ("%d %d", &A, &B);
	Total = A + B;
	printf ("%d\n", Total);
	Total = A - B;
	printf ("%d\n", Total);
	Total = A * B;
	printf ("%d\n", Total);
	fA = A;
	fB = B;
	fTotal = fA / fB;
	printf ("%.2f\n", fTotal);
	Total = A % B;
	printf ("%d\n", Total);
}
