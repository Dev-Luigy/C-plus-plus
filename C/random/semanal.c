#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int randValor(int linf, int lsup){
   #ifdef __linux__
          return(linf + (lrand48() % (lsup - linf + 1)));
   #elif _WIN32
          return (linf + (rand() % (lsup - linf + 1)));
   #else
         #error "OS not supported!"
   #endif
}

void bubble_sort (int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {

        for (j = 0; j < n - 1; j++) {

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

void selection_sort(int num[], int tam) { 
  int i, j, min, aux;
  for (i = 0; i < (tam-1); i++) 
  {
     min = i;
     for (j = (i+1); j < tam; j++) {
       if(num[j] < num[min]) 
         min = j;
     }
     if (i != min) {
       aux = num[i];
       num[i] = num[min];
       num[min] = aux;
     }
  }
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void merge(int arr[], int p, int q, int r) {

  // Create L ← A[p..q] and M ← A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l < r) {

    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}

void intercala2(int vet[], int ini, int meio, int meio2, int fim){
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
        int meio = (fim + ini*2)/3;
        int meio2= ((fim + meio + 1)/2);
        merge_sort3(vet, ini, meio);
        merge_sort3(vet, meio + 1, meio2);
        merge_sort3(vet, meio2 + 1, fim);
        
        intercala2(vet, ini, meio, meio2, fim);
    }
}

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// function to find the partition position
int partition(int array[], int low, int high) {
  
  // select the rightmost element as pivot
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      
      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }

  // swap the pivot element with the greater element at i
  swap(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(array, low, high);
    
    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);
    
    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

void resetarVetor1(int **vetor, int n){
    for (int i = 0; i < n; i++){
        vetor[1][i] = vetor[0][i];
    }
}

double execFunc(int vetor[], char texto[], int n){
    clock_t start, end;
    start = clock();
    if (strcmp(texto, "Bubble Sort") == 0)
        bubble_sort(vetor, n);
    else if(strcmp(texto, "Selection Sort") == 0)
        selection_sort(vetor, n);
    else if(strcmp(texto, "Insertion Sort") == 0)
        insertionSort(vetor, n);
    else if(strcmp(texto, "Merge Sort") == 0)
        mergeSort(vetor, 0, n - 1);
    else if(strcmp(texto, "Merge3 Sort") == 0)
        merge_sort3(vetor, 0, n - 1);
    else if(strcmp(texto, "Quick Sort") == 0)
        quickSort(vetor, 0, n - 1);
    else return 0;
    end = clock();
    double Tempo = (double)(end - start)  / CLOCKS_PER_SEC;
    printf ("%s tempo = %fs\n", texto, Tempo);
    return Tempo;
}

double (*teste1[6])(int *, char *, int);
teste1[0] = &execFunc;

void executar(){
  int ** vetor = (int **) malloc (sizeof(int*) * 2);

  char orderingNames[6][15] = {
    "Bubble Sort", "Selection Sort", "Insertion Sort", "Merge Sort", "Merge3 Sort", "Quick Sort"
  };
  double vetResultados[6][10];
  int vetTestes[10] = {1000, 5000, 10000, 50000, 100000, 200000, 300000, 500000, 800000, 1000000};

  for (int i = 0; i < 10; i++){
    for (int k = 0; k < 2; k++) vetor[k] = (int*) malloc (sizeof(int) * vetTestes[i]);
    for (int j = 0; j < vetTestes[i]; j++) {
      vetor[0][j] = vetor[1][j] = randValor(0, vetTestes[i]);
    }
    printf("Vetores de %d valores: \n", vetTestes[i]);
    vetResultados[0][i] = execFunc(vetor[1], orderingNames[0], vetTestes[i]);
    resetarVetor1(vetor, vetTestes[i]);
    vetResultados[1][i] = execFunc(vetor[1], orderingNames[1], vetTestes[i]);
    resetarVetor1(vetor, vetTestes[i]);
    vetResultados[2][i] = execFunc(vetor[1], orderingNames[2], vetTestes[i]);
    resetarVetor1(vetor, vetTestes[i]);
    vetResultados[3][i] = execFunc(vetor[1], orderingNames[3], vetTestes[i]);
    resetarVetor1(vetor, vetTestes[i]);    
    vetResultados[4][i] = execFunc(vetor[1], orderingNames[4], vetTestes[i]);
    resetarVetor1(vetor, vetTestes[i]);    
    vetResultados[5][i] = execFunc(vetor[1], orderingNames[5], vetTestes[i]);
    printf ("\n");
  }

  printf ("%-15s|", "");
  for (int i = 0; i < 10; i++) printf ("%-10i |", vetTestes[i]);
  printf ("\n");
  for (int i = 0; i < 6; i++){
    printf ("%-15s|", orderingNames[i]);
    for (int j = 0; j < 10; j++){
      printf ("%-10.3f |", vetResultados[i][j]);
    }
    printf ("\n");
  }

  printf("\n\n");
  free(vetor);
}

int main () {
  executar();
}

