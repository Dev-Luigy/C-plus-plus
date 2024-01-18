#include <stdio.h>
#include <stdlib.h>

void copiar (int v1[], int v2[], int tamanho)
{
    if (tamanho)
    {
        *v2 = *v1;
        copiar(++v1, ++v2, --tamanho);  
    }
}

int main ()
{
    int N = 0; scanf ("%d", &N);
    int v1[N], v2[N];
    for (int i = 0; i < N; i++) scanf ("%d", &v1[i]);
    copiar(v1, v2, N);
    for (int i = 0; i < N; i++) printf ("%d ", v2[i]);
    printf ("\n");
}