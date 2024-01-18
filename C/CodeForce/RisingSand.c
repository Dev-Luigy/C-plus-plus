#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int * menor, *maior, count = 0, numModify = 0, quantNum, quantTest, quantModify = quantTest = quantNum = 0;
    scanf ("%d", &quantTest);
    do
    {
        count = 0;
        scanf ("%d%d", &quantNum, &quantModify);
        numModify = quantModify;
        int array[quantNum];
        for (int j = 0; j < quantNum; j++) { scanf ("%d", &array[j]); } //scan
        do
        {
            for (int i = 1; i < quantNum; i++)
            {
                if ((abs(array[i - 1] - array[i + 1]) + 1) == numModify)
                {
                    menor = &array[i - 1];
                    maior = &array[i - 1];
                    for (int y = i - 1; y <= i + 1; y++) { menor = *menor < array[y] ? menor : &array[y]; maior = *maior > array[y] && y != i ? maior : &array[y]; }
                    *menor++;
                    printf ("%d %d\n", *menor, *maior);
                    if (numModify == 2) { array[i]++; }
                    else if (numModify == 3) { array[i]++; *maior++; }
                    //for (int y = 0; y < quantNum; y++) printf ("%d ", array[y]);
                    printf ("\n");
                    count++;
                }
            }
        } while (--quantModify);
        //for (int i = 1; i < quantNum; i++) if ((abs(array[i - 1] - array[i + 1]) + 1) == numModify) count++;
        printf ("%d\n", count);
    } while (--quantTest);
    
}