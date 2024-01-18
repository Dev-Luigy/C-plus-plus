#include <stdio.h>
#include <math.h>

int main ()
{
	float valor, parcelas, valorPagar, parcelasPreco, juros;
	scanf ("%f %f", &valor, &parcelas);
	if (parcelas == 1)
	{
		valorPagar = valor;
	}
	else 
	{
		juros = (1 + ((parcelas - 1) * 5)/100);
		valorPagar = valor * juros;
		parcelas = valorPagar / parcelas;
	}
	printf ("%.2f\n", parcelas);
	printf ("%.2f\n", valorPagar);
}
