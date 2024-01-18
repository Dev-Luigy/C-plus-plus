#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
Formas de mandar uma matriz para uma Função:
* -> Referencia o ponteiro, trás o dado a direita da memória. ou seja, o que tem dentro da matriz.
Forma 1 -> Array[Linhas][Colunas];
Forma 2 -> **Array
Forma 3 -> (*Array)[6]
*/

int ImprimirMatriz (int (*array)[6])
{
    int i = 0, i2 = 0;
    for (i = 0; i < 4; i++)
    {
        for (i2 = 0; i2 < 6; i2++)
        {
            i2 != 5 ? printf ("%3d ", array[i][i2]) : printf ("%3d", array[i][i2]); 
            //Condição de imprimir espaço ou não, na ultima não imprimi.
        }
        printf ("\n");
    }
}

int main ()
{
    srand(time(NULL));
    int array[4][6];
    int i = 0, i2 = 0,id = 1;
    for (; i < 4; i++)
    {
        for (i2 = 0; i2 < 6; i2++)
        {
            if (i % 2 == 0) //Linhas de cabeçalho;
            {
                array[i][i2] = id++; //inclementa o ID após usar o valor.
            }
            else { array[i][i2] = (rand() % 60) + 1; } //Caso a linha seja impar então adiciona os valores.
        }
        // rand() % 60 retorna entre 0 e 59, o +1 completa a requisição fazendo 1 e 60.
    }

    ImprimirMatriz(array);
}