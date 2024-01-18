#include <stdio.h>
#include <locale.h>


int main ()
{
	setlocale(LC_ALL, "portuguese");
	float M, A, B, resposta;
	scanf ("%f", &M);
	scanf ("%f", &A);
	scanf ("%f", &B);
	resposta = M - (A + B);
	if (resposta > A && resposta > B)
	{
		printf ("%.0f\n", resposta);
	}
		if (A > resposta && A > B)
	{
		printf ("%.0f\n", A);
	}
		if (B > resposta && B > A)
	{
		printf ("%.0f\n", B);
	}
}
