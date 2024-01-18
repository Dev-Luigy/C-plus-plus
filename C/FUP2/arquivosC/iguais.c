#include <stdio.h>

int main ()
{
	int A, B, C, resultado = 0;
	scanf ("%d %d %d", &A, &B, &C);
	resultado = A == B ? resultado += 1 : resultado;
	resultado = A == C ? resultado += 1 : resultado;
	resultado = C == B ? resultado += 1 : resultado;
	resultado = resultado == 4 ? resultado - 1 : resultado;
	resultado = resultado == 1 ? resultado + 1 : resultado;
	printf ("%d\n", resultado);
}
