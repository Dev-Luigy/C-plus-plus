#include <stdio.h>

int main ()
{
	int P, F, dT;
	char T[1];
	scanf (" %c", T);
	scanf ("%d", &F);
	dT = T[0] == 'c' ? 18 : 20;
	P = ((F * dT) - 80) / 10;
	if(P < 150)
	{
		printf ("Fraco, nem passou\n");
	}
	else if (P >= 150 && P < 180)
	{
		printf ("Perfeito\n");
	}
		else if (P >= 150 && P < 180)
	{
		printf ("Satisfeito\n");
	}
	else
	{
		printf ("Muito forte, bola fora\n");
	}

}
