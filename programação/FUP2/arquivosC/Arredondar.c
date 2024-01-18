#include <stdio.h>
#include <locale.h>
#include <math.h>


int main ()
{
	setlocale(LC_ALL, "portuguese");
	char tipo[0];
	float num, resultado;
	scanf (" %c", tipo);
	scanf ("%f", &num);
	if (tipo[0] == 'c')
	{
		resultado = ceil(num);
	}
	if (tipo[0] == 'f')
	{
		resultado = floor(num);
	}
	if (tipo[0] == 'r')
	{
		resultado = round(num);
	}
	printf ("%f\n", resultado);
}
