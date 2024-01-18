#include <stdio.h>

int ordenado(int *vet, int n){
    if (n == 1) return 1;
    if (vet[0] > vet[1]) return 0;
    return ordenado(&vet[1], n-1);
}

int main () {
    int vetor[5] = {1, 2, 3, 3, 5};
    printf ("%d\n", ordenado(vetor, 5));
}