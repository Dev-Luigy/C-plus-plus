#include <stdio.h>
#include <stdlib.h>

int intercala(int vet[], int ini, int fim){
    int * newVet = (int *) malloc (sizeof(int) * (fim - ini + 1));
    int i = fim;
    int k = 0;
    int j = ini;
    int value = vet[fim];

    int last = 0;

    for (; j < fim; j++){
        if (vet[j] <= value){
            newVet[k++] = vet[j];
        } else {
            newVet[i--] = vet[j];
        }
    }

    newVet[i] = value;
    last = i;
    i = 0;
    for (j = ini; j <= fim; j++){
        printf ("%d ", newVet[i]);
        vet[j] = newVet[i++];    
    }
    
    return last;
}

void quick_sort(int vet[], int ini, int fim){
    if (ini < fim){
        int pivo = intercala(vet, ini, fim);
        printf ("= %d e %d e %d\n", ini, fim, pivo);
        quick_sort(vet, ini, pivo - 1);
        quick_sort(vet, pivo + 1, fim);
    }
}

int main () {
    int vetor[6] = { 5, 6, 7, 4, 2, 4};
    quick_sort(vetor, 0, 5);
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}