#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	int Numero = 101, Count = 0, NumeroProcurado = rand() % 100 + 1;
	printf ("Tente adivinhar: \n");
	while (Numero != NumeroProcurado)
	{
		Count ++;
		scanf ("%d", &Numero);
		if (Numero == NumeroProcurado) { printf ("Acertou! classificação = ");if (Count <= 3)      { printf("muita sorte!\n"); }
																		 	  else if (Count <= 6) { printf("sorte!\n"); }
																			  else if (Count <= 10){ printf("normal!\n"); }
																		 	  else   			   { printf("azar!\n"); } }
		else if (Numero < NumeroProcurado)  { printf ("Errou, é maior\n"); }
		else if (Numero > NumeroProcurado)  { printf ("Errou, é menor\n"); }
	}
}
