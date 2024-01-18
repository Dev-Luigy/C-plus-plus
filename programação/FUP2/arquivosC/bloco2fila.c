#include <stdio.h>
#include <stdlib.h>


int get_men(int *array, int n)
{
    int i = 0, counter = 0;
    for(i = 0; i < n; i++) 
    {
        if (array[i] > 0) printf ("%d ", array[i]);
    }
    printf ("\n");
    return 0;
}

int get_calm_women(int *array, int n)
{
    int i = 0, counter = 0;
    for(i = 0; i < n; i++) 
    {
        if (array[i] < 0 && array[i] > -11) printf ("%d ", array[i]);
    }
    printf ("\n");
    return 0;
}

int * sort(int *array, int n, int tipo)
{
    int arrayOrdenado[n]; 
    
    int i = 0;
    for (i = 0; i < n; i++)
    {
        arrayOrdenado[i] = abs (array[i]);
    }
    
    qsort(arrayOrdenado, n, sizeof(int), comparador);

    if (tipo == 0) // envia a localização do array pra fora da função.
    {
        return arrayOrdenado;
    }
    else // apenas imprime tudo que tem no array.
    {
        for(i = 0; i < n; i++)
        {
            printf ("%d ", arrayOrdenado[i]);
        }
        printf ("\n");
        return 0;
    }
}

int * sort_stress(int * array, int n, int tipo)
{
    int arrayStress[n];
    int i = 0, counter = 0;

    for (i = n - 1; i >= 0 ; i--)
    {
        printf ("%d ", array[i]);
    }

    if (tipo == 0) return arrayStress;
    else 
    { 
        for(i = 0; i < n; i++) //mudar Variavel e completar.
        {
            printf ("%d ", arrayStress[i]);
        }
        printf ("\n");
    }
}

