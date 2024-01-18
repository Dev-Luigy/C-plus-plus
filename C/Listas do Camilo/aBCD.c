#include <stdio.h>
#include <stdlib.h>

void scanVetor (int * vetor, int N) {
    for (int i = 0; i < N; i++) {
        scanf ("%d", &vetor[i]);
    }
}

void printaVetor(int * vetor, int N) {
    for (int i = 0; i < N; i++) {
        printf ("%d ", vetor[i]);
    }
}

int j = 0;
int k = 0;

int * calculo(int * vA, int * vB, int N) {
    int * c = (int *) malloc (1 * sizeof(int));
    for (int i = 0; i < N; i++) {
        for (int y = 0; y < N; y++) {
            if (vA[i] == vB[y]) {
                c[j++] = vA[i];
                c = realloc(c, j + 1 );
            }   
        }
    }
    c = realloc(c, j);
    return c;
}

int * calculoDiferenca (int * vA, int * vC, int N) {
    int * resultado = (int *) malloc (1 * sizeof(int));
    for (int i = 0; i < N; i++) {
        for (int y = 0; y < j; y++) {
            if (vA[i] == vC[y]){
                vC[y] = -1;
                vA[i] = -1;
                break;
            }
        }
        if (vA[i] != -1) {
            resultado[k++] = vA[i];
            resultado = realloc(resultado, k + 1);
        }
    }
    return resultado;
}


int main () {
    int N = 0; scanf ("%d", &N);
    int a[N], b[N], c[N];
    scanVetor(a, N);
    scanVetor(b, N);
    scanVetor(c, N);
    int * d = calculo(b, c, N);
    int * resultado = calculoDiferenca(a, d, N);
    printaVetor(resultado, k);
    printf ("\n");
}