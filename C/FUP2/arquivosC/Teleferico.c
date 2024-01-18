#include <stdio.h>
#include <math.h>

int main ()
{
	float A, B;
	scanf ("%f %f", &A, &B);
	if (A >= B)
	{
		printf ("1\n");
	}
	else
	{
		A = ceil((B+1)/A);
		printf ("%.0f\n", A);
	}
}
