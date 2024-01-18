#include <stdio.h>
#include <math.h>

int main ()
{
	float A, B, C, p, area;
	scanf ("%f %f %f", &A, &B, &C);
	p = (A + B + C)/ 2;
	area = sqrt(p*(p-A)*(p-B)*(p-C));
	printf ("%.2f\n", area);
}
