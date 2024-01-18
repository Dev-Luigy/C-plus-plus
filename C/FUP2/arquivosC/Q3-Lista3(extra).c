#include <stdio.h>

int main ()
{
	int Maior = 0, Menor = 100, Numero = 1;
	
	while (Numero > 0)
	{
		scanf ("%d", &Numero);
		Menor = Menor > Numero && Numero > 0 ? Numero : Menor;
		Maior = Maior < Numero ? Numero : Maior;
	}
	printf ("Maior valor = %d, Menor valor = %d\n", Maior, Menor);
}
