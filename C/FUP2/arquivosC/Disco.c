#include <stdio.h>

int main ()
{
	int N, A, D, resultado; // A avião, D disco
	scanf ("%d %d %d", &N, &D, &A);
	resultado = A <= D ? D - A : N - A + D;
	printf ("%d\n", resultado);
}
