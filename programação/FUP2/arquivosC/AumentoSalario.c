#include <stdio.h>

int main ()
{
	float salario;
	scanf ("%f", &salario);
	if (salario <= 1000)
	{
		salario = salario * 1.20;
	}
	else if (salario <= 1500)
	{
		salario = salario * 1.15;
	}
	else if (salario <= 2000)
	{
		salario = salario * 1.10;
	}
	else if (salario > 2000)
	{
		salario = salario * 1.05;
	}
	else
	{
		printf ("inválido.");
	}
	printf ("%.2f\n", salario);
}
