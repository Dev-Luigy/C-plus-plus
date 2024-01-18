#include <stdio.h>
#include <math.h>

int main ()
{
	float N1, N2, total;
	char operacao[0];
	scanf ("%f %f", &N1, &N2);
	scanf (" %c", operacao);
	if (operacao [0] == '+')
	{
		total = N1 + N2;
	}
	else if (operacao [0] == '-')
	{
		total = N1 - N2;
	}
	else if (operacao [0] == '/')
	{
		total = floor(N1 / N2);
	}
	else if (operacao [0] == '*')
	{
		total = N1 * N2;
	}
	else
	{
		printf ("Inválido.");
	}
	printf ("%.0f\n", total);
}
