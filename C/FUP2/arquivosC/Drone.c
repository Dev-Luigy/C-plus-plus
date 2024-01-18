#include <stdio.h>

int main ()
{
	int A, B, C, H, L, contador = 0;
	scanf ("%d %d %d %d %d", &A, &B, &C, &H, &L);
	contador = A <= H || B <= H || C <= H ? contador += 1 : contador;
	contador = A <= L || B <= L || C <= L ? contador += 1 : contador;
	if (contador >= 2)
	{
		printf ("S\n");
	}
	else
	{
		printf ("N\n");
	}
}

