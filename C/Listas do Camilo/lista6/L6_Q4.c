#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
    srand(time(NULL)); //rand temp.
    int Matriz[6][3]; // Matriz;
    int i = 0, i2 = 0; // i - Incrementors;
    int menor[3], maior[3];
    // menor[3] significa que menor[0] contém o valor atual do menor, menor[1] a posição x, e menor[2] a posição y;

    for (; i < 6; i++) // Note que eu não inicializo o I, o I já é 0 e seu valor não precisa voltar.
    {
        for (i2 = 0; i2 < 3; i2 ++) // Nesse caso a cada inicialização de I, o I2 precisa virar 0, por isso tem inicio;
        {
            Matriz[i][i2] = (rand() % 20) + 1;
            int ma = Matriz[i][i2]; //var auxiliar para não digitar o nome inteiro da Matriz.

            if (i == 0 && i2 == 0)
            {
                maior[0] = ma; maior[1] = i; maior[2] = i2; // iguala pos x e y a 0 e pega o valor do maior;
                menor[0] = ma; menor[1] = i; menor[2] = i2;
            }
            else 
            { 
                if (maior[0] < ma) { maior[0] = ma; maior[1] = i; maior[2] = i2; };
                if (menor[0] > ma) { menor[0] = ma; menor[1] = i; menor[2] = i2; };
            }

            printf ("%3d ", Matriz[i][i2]); 
        }
        printf ("\n"); // descomentar para ver o resultado da matriz.
    }

    printf(
        "\nO maior numero é %d\nPode ser encontrado em (x, y) = (%d, %d)\n",
         maior[0], maior[1]+1, maior[2]+1
    );
    printf(
        "O menor numero é %d\nPode ser encontrado em (x, y) = (%d, %d)\n",
         menor[0], menor[1]+1, menor[2]+1
    );
}