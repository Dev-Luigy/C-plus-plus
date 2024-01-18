#include <stdio.h>
#include <stdlib.h>

int * rep (int * vetornumeros, int quantNum, int * count)
{
	int i = 0;
	int j = 0;
	int maior = 0;
	int vetor[10]; for (; i < 10; i++) vetor[i] = 0;
	int * vec = (int *) malloc(sizeof (int) * quantNum);
	do
	{
		maior = maior > ++vetor[vetornumeros[quantNum]] ? maior : vetor[vetornumeros[quantNum]];	
	}while (--quantNum);
	
	for (i = 0; i < 10; i++)
	{
		if (vetor[i] == maior) { vec[j++] = i; *count+= 1; }
	}
    
	return vec;
}

int main ()
{
	int quantNum = 0; scanf ("%d", &quantNum);
	int i = 0;
	int count = 0;
	int vetornumeros[quantNum];
	int tamVetor = quantNum;
	int numAtual, maior = numAtual = 0;
	do
	{
		scanf ("%d", &vetornumeros[quantNum]);
	} while (--quantNum);
	int * resp = rep (vetornumeros, tamVetor, &count);
	for (i = 0; i < count; i++) printf ("%d ", resp[i]);	
}
