#include <stdio.h>

int main ()
{
	int dia, hora, minuto;
	scanf ("%d %d %d", &dia, &hora, &minuto);
	if ((dia >= 2 && dia <= 6) && (hora >= 8 && hora <= 11 || hora >= 14 && hora <= 17))
	{
		printf ("SIM\n");
	}
	else if (dia == 7 && hora >= 8 && hora <= 11)
	{
		printf ("SIM\n");
	}
	else
	{
		printf ("NAO\n");
	}
}
