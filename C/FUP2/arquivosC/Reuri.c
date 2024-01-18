#include <stdio.h>

int main ()
{
	char A[1], B[1], C[1], D[1];
		int contador = 0;
		scanf ("%c %c %c %c",A,B,C,D);
		if (A[0] == 'd')
		{
			contador += 1; 
		}
		if (B[0] == 'a')
		{
			contador += 1; 
		}
		if (C[0] == 'c')
		{
			contador += 1; 
		}
		if (D[0] == 'd')
		{
			contador += 1; 
		}
		if (contador == 0)
		{
			printf ("Nunca assistiu\n");
		}
		else if (contador == 1)
		{
			printf ("Ja ouviu falar\n");
		}
		else if (contador == 2)
		{
			printf ("Interessado no assunto\n");
		}
		else if (contador == 3)
		{
			printf ("Fa\n");
		}
		else 
		{
			printf ("Super Fa\n");
		}
}
