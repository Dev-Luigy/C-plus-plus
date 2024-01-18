#include <stdio.h>
#include <stdlib.h>
#include "bloco1fila.c"
#include "bloco2fila.c"

int main ()
{    
    int arrayInicial[] = {-5, -7, 7, -5, 6, 1};
	int tamArray = sizeof(arrayInicial)/sizeof(int);
	
    int i = 0;
    
    printf ("%d\n", in(arrayInicial, tamArray, 0, 7));
    printf ("%d\n", index_of(arrayInicial, tamArray , 7));
    printf ("%d\n", min_element(arrayInicial, tamArray));
    printf ("%d\n", find_min_if(arrayInicial, tamArray));
    printf ("%d\n", count(arrayInicial, tamArray, 7));
    printf ("%d\n", average(arrayInicial, tamArray));
    half_compare(arrayInicial, tamArray); 
    more_men_or_women(arrayInicial, tamArray);
    sex_battle(arrayInicial, tamArray);
    get_men(arrayInicial, tamArray);
    get_calm_women(arrayInicial, tamArray);
    int * arraySort = sort(arrayInicial, tamArray, 1);
    
    for(i = 0; i < tamArray; i++)
    {
        printf ("%d ", arraySort[i]);
    }
    printf ("\n");
    
    sort_stress(sort(arrayInicial, tamArray, 0), tamArray, 0);
	
}

