#include <stdio.h>

int scanVetor (int *array, int n) // função para extrair os valores dos vetores.
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf ("%d", &array[i]);
	}
	return array;
}

int main ()
{
	int quantNumerosA = 0, quantNumerosB = 0;
	// get values of A;
	scanf ("%d", &quantNumerosA);
	int at_a[quantNumerosA];
	int * a = scanVetor(at_a, quantNumerosA);
	
	// get values of B;
	scanf ("%d", &quantNumerosB);
	int at_b[quantNumerosB];
	int * b = scanVetor(at_b, quantNumerosB);

	int Repetidos[20];
	int i = 0, i2 = 0, i3 = 0;
	for (i = 0; i <= 19; i ++)
	{
		Repetidos[i] = 555;
	}
	
	
	for (i = 0; i < quantNumerosA; i++)
	{
		for (i2 = 0; i2 < quantNumerosB; i2 ++)
		{
			if (a[i] == b[i2])
			{
				Repetidos[i] = a[i];
				for (i3 = 0; i3 < i; i3++) // se achar um anterior repetido, vire 555;
				{
					if (a[i3] == Repetidos[i]) { Repetidos[i3] = 555; break; }
				}
				break;
			}
		}
	} // aqui tenho todos os repetidos.
	
	for (i = 0; i < 20; i++)
	{
		if (Repetidos[i] >= 0 && Repetidos[i] <= 2000 && Repetidos[i] != 555) printf ("%d ",Repetidos[i]);
	}
}
	
	
