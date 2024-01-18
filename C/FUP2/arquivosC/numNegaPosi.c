#include <stdio.h>

int main ()
{
	int hora, minuto, segundo, contadorSegundo, contadorMinuto;
	scanf ("%d %d %d", &hora, &minuto, &segundo);
	segundo = segundo + 1 == 60 ? 00 : segundo + 1;
	minuto = segundo == 00 ? minuto + 1 : minuto;
	minuto = minuto == 60 ? 00 : minuto;
	hora = minuto == 00 ? hora + 1 : hora;
	hora = hora == 24 ? 00 : hora;
	printf ("%02d %02d %02d", hora, minuto, segundo);	
}
