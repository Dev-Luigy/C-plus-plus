#include <stdio.h>

int main()
{
	int A, B, C, D, resultado;
	scanf ("%d %d %d %d", &A, &B, &C, &D);
	resultado = A >= B && A >= C && A >= D ? A : resultado;
	resultado = B >= A && B >= C && B >= D ? B : resultado;
	resultado = C >= A && C >= B && C >= D ? C : resultado;
	resultado = D >= A && D >= B && D >= C ? D : resultado;
	printf ("%d", resultado);
}
