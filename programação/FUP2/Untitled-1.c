#include <stdio.h>
#include <stdlib.h>

int j = 0;

int * criaVetor(int n)
{
	int * vetor = (int *) malloc (n * sizeof(int));
	return vetor;
}

void copiar(int v1[], int v2[], int tam)
{
	if (tam) 
	{ 
		v2[j] = v1[j++];
		copiar(&v1[j], &v2[j++], tam--);
	}
}

int main ()
{
	int n1 = 0; scanf ("%d", &n1);
	int i = 0;
	int * v1 = criaVetor(n1);
	for(i = 0; i < n1; i++) scanf ("%d", &v1[i]);
	int * v2 = criaVetor(n1);
	i = 0;
	copiar (v1, v2, n1);
	for(i = 0; i < n1; i++) printf ("%d ", v2[i]);
}