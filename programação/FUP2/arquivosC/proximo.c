#include <stdio.h>

int main ()
{
	float Num,N1, N2, NumN1, NumN2;
	scanf ("%d %d %d", &Num, &N1, &N2);
	if (Num > N1 && Num > N2)
	{
		NumN1 = Num + N1;
		NumN2 = Num + N2;
		if (NumN1 < NumN2)
		{
			printf ("primeiro\n");
		}
		else if (NumN1 > NumN2)
		{
			printf ("segundo\n");
		}
		else
		{
			printf ("empate\n");
		}
	} 
	else if (Num < N1 && Num < N2)
	{
		NumN1 = N1 - Num;
		NumN2 = N2 - Num;
		if (NumN1 < NumN2)
		{
			printf ("primeiro\n");
		}
		else if (NumN1 > NumN2)
		{
			printf ("segundo\n");
		}
		else
		{
			printf ("empate\n");
		}
	}
	else
	{
		NumN1 = N1 - Num;
		NumN2 = N2 - Num;
		if (NumN1 < 0)
		{
			NumN1 = -NumN1
		}
		if (NumN2 < 0)
		{
			NumN2 = -NumN2
		}
		if (NumN1 < NumN2)
		{
			printf ("primeiro\n");
		}
		else if (NumN1 > NumN2)
		{
			printf ("segundo\n");
		}
		else
		{
			printf ("empate\n");
		}
	}
}
