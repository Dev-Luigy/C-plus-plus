#include <stdio.h>

int main ()
{
	float Notas[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.5, 0.25, 0.10, 0.05}; 
	float Valor = 0;
	int NotaAtual = 0, vezesNotaAtual = 0, gvezesNotaAtual = 0;
	scanf ("%f", &Valor);
	//printf ("%f\n", Valor);
	for (NotaAtual = 0; NotaAtual < 11; NotaAtual++)
	{
		if (Valor - Notas[NotaAtual] >= 0)
		{
			//printf ("\n%.2f a\n", Valor);
			gvezesNotaAtual = 0;
			for (vezesNotaAtual = 0 ; Valor - Notas[NotaAtual] >= 0; vezesNotaAtual ++)
			{
				Valor -= Notas[NotaAtual];
				gvezesNotaAtual ++;
			}
			printf ("%d de ", gvezesNotaAtual);
			Notas[NotaAtual] != 0.05 ? printf ("%.2f\n",Notas[NotaAtual]) : printf ("%.2f",Notas[NotaAtual]);
		}
	}
	printf ("%.2f", Valor);
	if (Valor >= 0.005) printf ("Falta %.2f\n", Valor) ;
}
