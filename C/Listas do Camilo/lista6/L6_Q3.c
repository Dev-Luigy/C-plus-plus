#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
    srand(time(NULL)); //rand temp.
    int Matriz[4][3]; // Matriz;
    int i = 0, i2 = 0; // i - Incrementors;
    int counter[4], parescounter = 0, soma = 0; // Contadores.

    for (; i < 4; i++) // Note que eu não inicializo o I, o I já é 0 e seu valor não precisa voltar.
    {
        counter[i] = 0; //Inicia o contador em 0.
        for (i2 = 0; i2 < 3; i2 ++) // Nesse caso a cada inicialização de I, o I2 precisa virar 0, por isso tem inicio;
        {
            Matriz[i][i2] = (rand() % 20) + 1;
            int ma = Matriz[i][i2];

            if (ma >= 15 && ma <= 20) 
            { 
                counter[i]++; // Contador linear de 15 <= N <= 20;
                if (ma % 2 == 0) { soma += ma; parescounter++; }
            }
            //printf ("%3d ", Matriz[i][i2]); 
        }
        //printf ("\n"); // descomentar para ver o resultado da matriz.
        
        printf (
            "Linha %d tem %d numeros acima de 15 e menor que 20\n",
                    i,    counter[i]
        );
    }

    printf ("A Média dos elementos pares é = %d\n", soma / parescounter);
}