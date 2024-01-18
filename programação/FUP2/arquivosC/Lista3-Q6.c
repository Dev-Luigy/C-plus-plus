#include <stdio.h>

int main () 
{
	int Numero = 0, count = 1, total = 1;
	scanf ("%d", &Numero);
	printf ("%d", total);
	while (count < Numero)
	{
		total = total * 2 + 1;
		printf (", %d", total);
		count ++;
	}
	printf (".\n");
}