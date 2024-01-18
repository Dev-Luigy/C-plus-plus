#include <stdio.h>
#include <stdlib.h>

int comparador (const void *a, const void *b)
{
    return (*(int *)a - *(int*)b);
}

int in (int *array, int n, int inicio, int numproc) // verifica se o numero existe
{
    int meio = (n + inicio)/2;
    if (array[meio] == numproc) return 1; //existe.
    else if (array[meio + 1] == numproc || array[meio - 1] == numproc) return 1;
    else if (array[meio + 1] > numproc && array[meio - 1] < numproc) return -1; // não existe.
    else if (array[meio] > numproc) return in (array, meio - 1, n, numproc);
    else if (array[meio] < numproc) return in (array, n, meio + 1, numproc);
}

int index_of (int *array, int n, int numproc)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if (array[i] == numproc) return i + 1;
    }
    return -1; //não existe.
}

int find_if (int *array, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if (array[i] >= 1) return i + 1;
    }
    return -1; //não existe.
}

int min_element (int *array, int n)
{
    int i;
    int mIndex = 0, Menor = 100000;
    for(i = 0; i < n; i++)
    {
        if (Menor > abs (array[i])) { Menor = abs (array[i]) ; mIndex = i + 1; }
        //printf ("%d e %d\n", Menor, array[i]);
    }
    return mIndex;
}

int find_min_if (int *array, int n)
{
    int i;
    int mIndex = 0, Menor = 100000;
    for(i = 0; i < n; i++)
    {
        if (Menor > array[i] && array[i] > 0) { Menor = array[i] ; mIndex = i + 1; }
        //printf ("%d e %d\n", Menor, array[i]);
    }
    return mIndex;
}

int count (int *array, int n, int numproc)
{
    int i;
    int count = 0;
    for(i = 0; i < n; i++)
    {
        if (array[i] == numproc) count ++;
    }
    return (count > 0 ? count : -1 ) ;
}

int average (int *array, int n)
{
    int i;
    int media = 0;
    for(i = 0; i < n; i++)
    {
        media += abs (array[i]);
    }
    return media / n;
}

int half_compare(int *array, int n)
{ // caso dê impar, o participante do meio participará das 2 contagens.
    int meio = n/2;
    int media1 = 0, media2 = 0;
    int i = 0;
    for(i = 0; i < meio; i++) // primeira metade.
    {
        media1 += abs (array[i]);
    }
    for(i = meio; i < n; i++) // primeira metade.
    {
        media2 += abs (array[i]);
    }

    if      (media1 == media2) { printf ("Draw\n");   return 0; }
    else if (media1 > media2)  { printf ("First\n");  return 0; }
    else if (media1 < media2)  { printf ("Second\n"); return 0; }
    //nesse caso o return 0 apenas termina a função.
}

int more_men_or_women(int *array, int n)
{
    int men = 0, women = 0;
    int i = 0;
    for(i = 0; i < n; i++) // primeira metade.
    {
        if (array[i] >= 1) men += 1;
        else women += 1;
    }

    if      (men == women) { printf ("Draw\n" ); }
    else if (men > women)  { printf ("Men\n"  ); }
    else if (men < women)  { printf ("Women\n"); }
}

int sex_battle (int *array, int n)
{
    int men = 0, women = 0;
    int cMen = 0, cWomen = 0;
    int i = 0;
    for(i = 0; i < n; i++) // primeira metade.
    {
        if (array[i] >= 1) { men += array[i]; cMen ++;     }
        else               { women += abs (array[i]); cWomen ++; }
    }

    men /= cMen;
    women /= cWomen;

    if      (men == women) { printf ("Draw\n" ); }
    else if (men > women)  { printf ("Men\n"  ); }
    else if (men < women)  { printf ("Women\n"); }
}
