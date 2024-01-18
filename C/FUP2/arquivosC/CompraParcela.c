#include <stdio.h>
#include <locale.h>


int main ()
{
	setlocale(LC_ALL, "portuguese");
	float vezes, valor, parcela, valorTotal, teste;
	scanf ("%f", &valor);
	scanf ("%f", &vezes);
	if (vezes == 1)
	{
		parcela = valor
		printf ("%.2f\n", parcela);
		printf ("%.2f\n", valor);
	}
	else
	{
		parcela = (valor * (1 + (((vezes - 1) * 5)/100))) / vezes;
		valorTotal = parcela * vezes;
		printf ("%.2f\n", parcela);
		printf ("%.2f\n", valorTotal);
	}
}
