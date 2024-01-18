#include <stdio.h>


int main ()
{
    int mTamanho = 0; scanf ("%d", &mTamanho); //Tamanho da Matriz.
    int matriz[mTamanho][mTamanho]; // Declaração da Matriz.
    int i2, i = i2 = 0;

    /* 
        Regras a observar:
        1º Sempre que i2(colunas) = 0, resultado = 1;
        2º a cada execução do for de colunas adicionar +1 coluna.
        essa coluna vai ter tamanho de 0 á mTamanho - 1;
    */

    // É necessário zerar todos os valores da matriz, para que não haja erros de calculos com casas vazias.
    for (; i < mTamanho; i++)
    {
        for (i2 = 0; i2 < mTamanho; i2++)
        {
           matriz[i][i2] = 0;
        }
    }

    //Abaixo será feito o calculo.
    int quantColunas = 1;
    for (i = 0; i < mTamanho; i++)
    {
        for (i2 = 0; i2 < quantColunas; i2++)
        {
            if (i2 == 0) matriz[i][i2] = 1;
            else matriz [i][i2] = matriz[i-1][i2-1] + matriz[i-1][i2]; //A atual = Soma do valor acima coluna anterior + valor acima.
        }
        quantColunas++;
    }


    for (i = 0; i < mTamanho; i++)
    {
        for (i2 = 0; i2 < mTamanho; i2++)
        {
           if (matriz[i][i2] != 0) printf ("%2d ", matriz[i][i2]);
        }
        printf ("\n");
    }
}

