#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void intercala(int vet[], int ini, int meio, int meio2, int fim){
    int * newVet = (int*) malloc((fim - ini + 1) * sizeof(int));

    int i = ini;
    int j = meio + 1;
    int l = meio2 + 1;
    int k = 0;
    
    // 3 parameters
    while (i <= meio && j <= meio2 && l <= fim){
        if      (vet[i] <= vet[j] && vet[i] <= vet[l]) 
            newVet[k++] = vet[i++];
        else if (vet[j] <= vet[i] && vet[j] <= vet[l])
            newVet[k++] = vet[j++];
        else if (vet[l] <= vet[j] && vet[l] <= vet[i])
            newVet[k++] = vet[l++];
    }
    
    
    // 2 parameters
    while (i <= meio && j <= meio2){
        if  (vet[i] <= vet[j]) {
            newVet[k++] = vet[i++];
        } else {
            newVet[k++] = vet[j++];
        }
    } 
    while (j <= meio2 && l <= fim){
        if  (vet[j] <= vet[l]) {
            newVet[k++] = vet[j++];
        } else {
            newVet[k++] = vet[l++];
        }
    } 
    while (i <= meio && l <= fim){
        if  (vet[i] <= vet[l]) {
            newVet[k++] = vet[i++];
        } else {
            newVet[k++] = vet[l++];
        }
    }

    //Only one
    while (i <= meio) newVet[k++] = vet[i++];
    while (j <= meio2) newVet[k++] = vet[j++];
    while (l <= fim) newVet[k++] = vet[l++];
    
    for (int i = ini; i <= fim; i++){
        vet[i] = newVet[i - ini];
    }
    
    free(newVet);
}

void merge_sort3(int vet[], int ini, int fim){
    if(ini < fim){
        int meio = ini + (fim - ini)/3;
        int meio2= meio + (fim - ini)/3 + 1;
        merge_sort3(vet, ini, meio);
        merge_sort3(vet, meio + 1, meio2);
        merge_sort3(vet, meio2 + 1, fim);
        
        intercala(vet, ini, meio, meio2, fim);
    }
}


int main(){
    int n;
    scanf("%d", &n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    merge_sort3(vetor, 0, n-1);
    
    for(int i = 0; i < n; i++) printf("%d ", vetor[i]);
    printf ("\n");
}