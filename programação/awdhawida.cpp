#include <iostream>
#include <stdlib.h>

int count = 0;

int * diferenca(int * v1, int tam1, int * v2, int tam2)
{
	int i, j, k = i = j = 0;
	
	for (i = 0; i < tam1; i++)
	{
		for (j = 0; j < tam2; j++)
		{
			if (v1[i] == v2[j]) break;
			else if (j == tam2 - 1) { count ++; }
		}
	}
	
	int * vetor = (int *) malloc (sizeof(int) * count);
	
	for (i = 0; i < tam1; i++)
	{
		for (j = 0; j < tam2; j++)
		{
			if (v1[i] == v2[j]) break;
			else if (j == tam2 - 1) vetor[k++] = v1[i];
		}
	}
	printf ("%d\n", count);
	return vetor;
}

int main()
{
	int i = 0;
	int vetor1[3] = {8,3,9};
	int vetor2[5] = {7,2,8,8,9};
	int * vetor3 = diferenca(vetor1, 3, vetor2, 5);
	for (i = 0; i < count; i++) printf ("%d ", vetor3[i]);
}
