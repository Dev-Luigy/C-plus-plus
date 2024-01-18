#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int linhas = 4, colunas = 5;
    int ** matriz = calloc(sizeof(int*), linhas);
    while (--colunas+1) *(matriz + colunas) = calloc (sizeof(int), colunas);

    int quantNum = linhas * colunas;

    int num = 0;

    int iPar, iImpar = iPar = 0;
    int iParColuna, iImparColuna = iParColuna = 0;

    do
    {
        scanf ("%d", &num);

        if (num % 2 == 0)       { *(*(matriz + (iPar += iParColuna++%5 == 4 ? 2 : 0)) + iParColuna) = num; quantNum --; printf("%d, %d\n", iPar, iParColuna); }
        else if (num % 2 != 0)  { *(*(matriz + (iImpar += iImparColuna++%5 == 4 ? 2 : 0)) + iImparColuna) = num; quantNum --; }
    } while (quantNum);

    int count = 20;
    int i, y = i = 0;

    while(count--) printf ("%d ", *(*(matriz + (i += y%5 == 4 ? 2 : 0)) + y++));


    free (matriz);
}