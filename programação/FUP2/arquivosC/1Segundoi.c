#include <stdio.h>

int main ()
{
	int A, soma, constante;
	scanf ("%d", &A);
	soma = A <= 100 ? A : 0;
	soma = soma % 26 == 0 ? 96 + 26 : (soma % 26) + 96;
	printf ("%c\n", soma);
}
