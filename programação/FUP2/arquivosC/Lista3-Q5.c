#include <stdio.h>

int main () 
{
	int Numero = 0, contador = 0, total = 0;
	float Media;
	while (Numero >= 0)
	{
		scanf ("%d", &Numero);
		if (Numero < 0)
		{
			break;
		}
		else
		{
			total += Numero;
			contador++;
		}
	}
	printf ("Quantidade = %d ", contador);
	printf ("Soma = %d ", total);
	Media = (float)total / contador;
	printf ("Media = %.1f ", Media);
}