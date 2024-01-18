#include <stdio.h>

int existe(int *vet, int tam, int elem)
{
	tam--;
	if (*vet == elem) return 1;
	else if (!tam) return - 1;
	return existe (&vet[1], tam, elem);
}

int main ()
{
	int tamvetor = 0;
	int elem = 0;
	int i = 0;
	scanf ("%d %d", &tamvetor, &elem);
	int vetor[tamvetor];
	for (; i < tamvetor; i++) scanf ("%d", &vetor[i]);
	printf ("%d\n", existe(vetor, tamvetor, elem));
}
