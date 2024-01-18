#include <stdio.h>

int bin_search(int *vet, int start, int end, int value){
    if (vet[end - 2] < value && start == 0) return -1;
    int mid = (start + end) / 2;
    if (start >= end) return vet[mid];
    if (vet[mid] == value) return value;
    else if (vet[mid] < value)
        return bin_search(vet, mid + 1, end, value);
    else if (vet[mid] > value)
        return bin_search(vet, start, mid, value);
    return 0;
}

int main () {
    int vetor[18] = {1,2,3,4,5,7,8,9,10,11,12,13,15,20,30,50,55};
    printf ("%d\n", bin_search(vetor, 0, 18, 25));
}