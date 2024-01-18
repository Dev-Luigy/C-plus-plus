#include <stdio.h>

int main ()
{
	int dhora, dminuto, dsegundo, ahora, aminuto, asegundo, rhora, rminuto, rsegundo;
	scanf ("%d %d %d", &dhora, &dminuto, &dsegundo);
	scanf ("%d %d %d", &ahora, &aminuto, &asegundo);
	rhora = dhora > ahora ? ahora + 24 - dhora : ahora - dhora;
	rhora = dminuto > aminuto ? rhora - 1 : rhora;
	rminuto = dminuto > aminuto ? aminuto + 60 - dminuto : aminuto - dminuto;
	rminuto = dsegundo > asegundo ? rminuto - 1 : rminuto;
	rsegundo = dsegundo > asegundo ? asegundo + 60 - dsegundo : asegundo - dsegundo;
	printf ("%02d %02d %02d", rhora, rminuto, rsegundo);
}
