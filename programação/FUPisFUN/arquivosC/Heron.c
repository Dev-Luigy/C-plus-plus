#include <stdio.h>
#include <locale.h>


int main ()
{
	setlocale(LC_ALL, "portuguese");
	float a, b, c, p, area;
	
	printf ("valor de A: "); scanf ("%f", &a);
	printf ("valor de B: "); scanf ("%f", &b);
	printf ("valor de C: "); scanf ("%f", &c);
	p = (a+b+c)/2;
	area = sqrt (p*(p-a)*(p-b)*(p-c));
	printf ("==========");
	printf ("\n¡rea: %.2f", area);
}
