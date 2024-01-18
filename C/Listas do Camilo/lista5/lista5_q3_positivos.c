#include <stdio.h>

int main ()
{
	int v[10], i = 0, last[2];
	for (i = 0; i <= 9; i++)
	{
		scanf ("%d", &v[i]);
		if (v[i] > 0) { last[0] = v[i] ; last[1] = i;} //grava o valor e posicao do ultimo positivo.
	}
	for (i = 0; i <= 9; i++)
	{
		if (v[i] > 0) 
		{ 
			printf ("%d", v[i]); // imprime o positivo;
			
			// abaixo a flag para imprimir espaço ou quebra de linha entre valores.
			if(v[i] == last[0] && i == last[1])
			{
				printf("\n");
			}
			else
			{
				printf(" ");
			}
		}
	}
}
