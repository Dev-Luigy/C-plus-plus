#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	int NQ;
	
	printf ("Digite a quest�o que voc� quer fazer: "); scanf ("%d", &NQ);
	
	//------------------------------------------------------------------------------------------
	// Quest�o 1.
	if(NQ == 1)
	{
		float temperaturaQ1, escalaQ1, resultadoQ1;
		printf ("Digite a temperatura e escala: "); scanf ("%f %f", &temperaturaQ1, &escalaQ1);
		if (escalaQ1 == 0)
		{
			resultadoQ1 = (temperaturaQ1 * 1.8) + 32;
			printf ("Fahrenheit: %f", resultadoQ1);
		}
		else if (escalaQ1 == 1)
		{
			resultadoQ1 = (temperaturaQ1 - 32) * 5/9;
			printf ("Celcius: %f", resultadoQ1);
		}
	}
	//------------------------------------------------------------------------------------------
	// Quest�o 2.
	if(NQ == 2)
	{
		float N1Q2, N2Q2;
		printf ("Digite os numeros: "); scanf ("%f %f", &N1Q2, &N2Q2);
		if (N1Q2 == N2Q2)
		{
			printf ("Numeros Iguais!");
		}
		else if (N1Q2 > N2Q2)
		{
			printf ("Maior n�mero: %f", N1Q2);
		}
		else
		{
			printf ("Maior n�mero: %f", N2Q2);
		}
		
	}
	//------------------------------------------------------------------------------------------
	// Quest�o 3.
	if(NQ == 3)
	{
		float N1Q3, N2Q3, N3Q3;
		printf ("Digite os numeros: "); scanf ("%f %f %f", &N1Q3, &N2Q3, &N3Q3);
		if (N1Q3 > N2Q3 && N1Q3 > N3Q3)
		{
			printf ("Maior n�mero �: %f", N1Q3);
		}
		else if (N2Q3 > N1Q3 && N2Q3 > N3Q3)
		{
			printf ("Maior n�mero �: %f", N2Q3);
		}
		else if (N3Q3 > N1Q3 && N3Q3 > N2Q3)
		{
			printf ("Maior n�mero �: %f", N3Q3);
		}
	}
	//------------------------------------------------------------------------------------------
	// Quest�o 4.
	if(NQ == 4)
	{
		// 0. Pedra
		// 1. Tesoura
		// 2. Papel
		float N1Q4, N2Q4;
		printf ("Digite a jogadade A e B: "); scanf ("%f %f", &N1Q4, &N2Q4);
		// Condi��o Empate.
		if (N1Q4 == N2Q4)
		{
			printf ("Empate");
		}
		// Condi��o Pedra - Tesoura.
		else if ((N1Q4 == 0 && N2Q4 == 1) || (N1Q4 == 1 && N2Q4 == 0))	
		{
			if (N1Q4 == 0)
			{
				printf ("A venceu.");
			}
			else
			{
				printf ("B venceu.");
			}
		}
		// Condi��o Tesoura - Papel.
		else if ((N1Q4 == 2 && N2Q4 == 1) || (N1Q4 == 1 && N2Q4 == 2))	
		{
			if (N1Q4 == 1)
			{
				printf ("A venceu.");
			}
			else
			{
				printf ("B venceu.");
			}
		}
		// Condi��o Pedra - Papel.
		else if ((N1Q4 == 2 && N2Q4 == 0) || (N1Q4 == 0 && N2Q4 == 2))	
		{
			if (N1Q4 == 2)
			{
				printf ("A venceu.");
			}
			else
			{
				printf ("B venceu.");
			}
		}
		
	}
	//------------------------------------------------------------------------------------------
	// Quest�o 5.
	if(NQ == 5)
	{
		float N1Q5, N2Q5, Media;
		printf ("Digite as notas: "); scanf ("%f %f", &N1Q5, &N2Q5);
		Media = (N1Q5 + N2Q5) / 2;
		printf ("M�dia: %.2f", Media);
		printf ("\n");
		if (Media < 4)
		{
			printf ("Situa��o: Reprova��o por m�dia");
		}
		else if (Media >= 4 && Media < 7)
		{
			printf ("Situa��o: Avalia��o final");
		}
		else 
		{
			printf ("Situa��o: Aprova��o por m�dia");
		}
	}
	//------------------------------------------------------------------------------------------
	// Quest�o 6.
	if(NQ == 6)
	{
		int anoQ6;
		float teste1, teste2, teste3;
		printf ("Digite o ano: "); scanf ("%f", &anoQ6);
		if (anoQ6 % 4 == 0)
		{
			printf ("Bissexto");
		}
		else if (anoQ6 % 100 == 0 && anoQ6 % 400 == 0)
		{
			printf ("Bissexto");
		}
		else
		{
			printf ("N�o bissexto");
		}
	}
	//------------------------------------------------------------------------------------------
	// Quest�o 7.
	if(NQ == 7)
	{
		
	}
	return 0;
}
