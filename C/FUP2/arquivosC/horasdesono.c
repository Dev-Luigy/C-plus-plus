#include <stdio.h>

int main ()
{
	int dhora, dminuto, dsegundo, ahora, aminuto, asegundo, rhora, rminuto, rsegundo;
	scanf ("%d %d %d", &dhora, &dminuto, &dsegundo);
	scanf ("%d %d %d", &ahora, &aminuto, &asegundo);
	rhora = dhora > ahora ? ahora + 24 - dhora :  ahora - dhora; //23
	rhora = dminuto > aminuto ? rhora - 1 : rhora; // estão iguais então = 23, era pra diminuir 1 aqui.
	rhora = dminuto == aminuto && dsegundo > asegundo ? rhora - 1 ; rhora;
	rminuto = dminuto > aminuto ? aminuto + 60 - dminuto : aminuto - dminuto; 
	rminuto = dsegundo > asegundo ? rminuto - 1 : rminuto; 
	rminuto = rminuto < 0 ? rminuto + 60 : rminuto;
	rsegundo = dsegundo > asegundo ? asegundo + 60 - dsegundo : asegundo - dsegundo;
	printf ("%02d %02d %02d\n", rhora, rminuto, rsegundo);
}
