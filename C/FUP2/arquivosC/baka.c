#include <stdio.h>
#include <math.h>
#include <locale.h>

int main ()
{
		setlocale (LC_ALL, "pt-BR");
    	float AQ7, BQ7, CQ7, deltaQ7;
		float raizPositivaQ7, raizNegativaQ7;
		scanf ("%f %f %f", &AQ7, &BQ7, &CQ7);
		deltaQ7 = (BQ7*BQ7) - (4 * AQ7 * CQ7);
		raizPositivaQ7 = ((-BQ7) + sqrt(deltaQ7))/(2*AQ7);
		raizNegativaQ7 = ((-BQ7) - sqrt(deltaQ7))/(2*AQ7);
		if (deltaQ7 < 0)
		{
			printf ("Delta negativo, n�o h� raizes reais.");
		}
		else if (AQ7 == 0)
		{
			printf ("'a' igual a zero, n�o � uma equa��o de 2� grau.");
		}
		else
		{
			printf ("As ra�zes s�o x1 = %.2f e x2 = %.2f", raizPositivaQ7, raizNegativaQ7);
		}
}
