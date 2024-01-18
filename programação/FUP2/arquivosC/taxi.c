#include <stdio.h>

int main ()
{
	float A, G, Ra, Rg, Ca, Cg;
	scanf ("%f %f %f %f", &A, &G, &Ra, &Rg);
	Ca = A / Ra;
	Cg = G / Rg;
	if (A == G && Ra == Rg)
	{
		printf ("G\n");
	}
	else if (Ca < Cg)
	{
		printf ("A\n");
	}
	else if (Cg < Ca)
	{
		printf ("G\n")a;
	}
}
