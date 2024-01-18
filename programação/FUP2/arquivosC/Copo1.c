#include <stdio.h>

int main ()
{
	int Num = 0, Linha = 0, Coluna, CaracterCount = 0, verif = 0, NumPost = 0;
	scanf ("%d", &Num);
	CaracterCount = Num * 2;
	NumPost = Num;
	Num % 2 == 0 ? verif = 1 : verif;
	for (Linha = 0; Linha < NumPost; Linha ++)
	{
		if (verif == 0) // Essa parte resolve o problema dos impares.
		{
			Linha += 1;
			Coluna += 0;
			verif += 10;
			NumPost += 1;
		}
		for (Coluna = 0; Coluna < CaracterCount; Coluna++)
		{
			if ((Coluna >= Num - Linha && Coluna <= Num + Linha) && Linha % 2 == 0) // Par
			{
				printf ("%d", Num);
			}
			else if ((Coluna >= Num - Linha && Coluna <= Num + Linha) && Linha % 2 == 1) // Impar
			{
				printf ("%d", Num);
			}
			else if (Coluna == 0)
			{
				printf ("");
			}
			else
			{
				printf (".");
			}
		}
		printf ("\n", Linha);
	}
}
