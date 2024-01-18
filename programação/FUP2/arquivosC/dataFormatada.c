#include <stdio.h>

int main ()
{
	int hora, minuto, dia, mes, ano;
	scanf ("%d %d %d %d %d", &hora, &minuto, &dia, &mes, &ano);
	if (hora % 12 == 0)
	{
		hora = 00;
	}
	else if (hora > 12)
	{
		hora = hora - 12;
	}
	ano = ano % 100;
	printf ("%02d:%02d %02d/%02d/%02d\n", hora, minuto, dia, mes, ano);
}
