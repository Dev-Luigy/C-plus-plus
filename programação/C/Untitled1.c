#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	int NQ;
	
	printf ("Digite a questão que você quer fazer: "); scanf ("%d", &NQ);
	
	//------------------------------------------------------------------------------------------
	// Questão 1.
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
	// Questão 2.
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
			printf ("Maior número: %f", N1Q2);
		}
		else
		{
			printf ("Maior número: %f", N2Q2);
		}
		
	}
	//------------------------------------------------------------------------------------------
	// Questão 3.
	if(NQ == 3)
	{
		float N1Q3, N2Q3, N3Q3;
		printf ("Digite os numeros: "); scanf ("%f %f %f", &N1Q3, &N2Q3, &N3Q3);
		if (N1Q3 > N2Q3 && N1Q3 > N3Q3)
		{
			printf ("Maior número é: %f", N1Q3);
		}
		else if (N2Q3 > N1Q3 && N2Q3 > N3Q3)
		{
			printf ("Maior número é: %f", N2Q3);
		}
		else if (N3Q3 > N1Q3 && N3Q3 > N2Q3)
		{
			printf ("Maior número é: %f", N3Q3);
		}
	}
	//------------------------------------------------------------------------------------------
	// Questão 4.
	if(NQ == 4)
	{
		// 0. Pedra
		// 1. Tesoura
		// 2. Papel
		float N1Q4, N2Q4;
		printf ("Digite a jogadade A e B: "); scanf ("%f %f", &N1Q4, &N2Q4);
		// Condição Empate.
		if (N1Q4 == N2Q4)
		{
			printf ("Empate");
		}
		// Condição Pedra - Tesoura.
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
		// Condição Tesoura - Papel.
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
		// Condição Pedra - Papel.
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
	// Questão 5.
	if(NQ == 5)
	{
		float N1Q5, N2Q5, Media;
		printf ("Digite as notas: "); scanf ("%f %f", &N1Q5, &N2Q5);
		Media = (N1Q5 + N2Q5) / 2;
		printf ("Média: %.2f", Media);
		printf ("\n");
		if (Media < 4)
		{
			printf ("Situação: Reprovação por média");
		}
		else if (Media >= 4 && Media < 7)
		{
			printf ("Situação: Avaliação final");
		}
		else 
		{
			printf ("Situação: Aprovação por média");
		}
	}
	//------------------------------------------------------------------------------------------
	// Questão 6.
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
			printf ("Não bissexto");
		}
	}
	//------------------------------------------------------------------------------------------
	// Questão 7.
	if(NQ == 7)
	{
		
	}
	return 0;
}
