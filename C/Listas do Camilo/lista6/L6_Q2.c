#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
    srand(time(NULL)); //rand temp.
    int Matriz[3][5]; // Matriz;
    int i = 0, i2 = 0; // i - Incrementors;
    int counter = 0, soma = 0; // Contadores.

    for (; i < 3; i++) // Note que eu não inicializo o I, o I já é 0 e seu valor não precisa voltar.
    {
        for (i2 = 0; i2 < 5; i2 ++) // Nesse caso a cada inicialização de I, o I2 precisa virar 0, por isso tem inicio;
        {
            Matriz[i][i2] = (rand() % 20) + 1;

            if (Matriz[i][i2] >= 15 && Matriz[i][i2] <= 20) { counter ++; soma += Matriz[i][i2]; }
            //printf ("%3d ", Matriz[i][i2]); Desconemntar para ver o resultado da matriz..
        }
        //printf ("\n"); // descomentar para ver o resultado da matriz.
    }

    printf ("Soma = %d\nQuantidade de vezes = %d", soma, counter);
}