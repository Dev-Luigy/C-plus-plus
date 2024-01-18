#include <stdio.h>
#include <stdlib.h>

//Comparador para usar o qsort;
int comparador(const void *a, const void *b)
{
	return ( *(int*)a - *(int*)b );
}

int imprimirMatriz(int **matriz)
{
    int i2, i = i2 = 0;
    for (; i < 5; i++)
    {
        for (i2 = 0; i2 < 5; i2++)
        {
            printf ("%2d", matriz[i][i2]);
        }
        printf ("\n");
    }
}

int main ()
{
    int ranking[5];
    int i2, i = i2 = 0;

    // alocando matriz na reap. aqui temos 5 linhas. 
    // a casa 5 vai armazenar o total da linha.
    int **matriz = (int**)malloc(5 * (sizeof (int*))); 
    for (; i < 5; i++)
    {
        matriz[i] = (int*)malloc(6 * sizeof(int)); //aqui 6 colunas.
    }


    int somaLinha = 0;
    int * temp; // Uma var que vai receber r-value de uma matriz.

    //Nesse for pegaremos os valores e a soma de cada linha.
    for (i = 0; i < 5; i++)
    {
        somaLinha = 0;
        for (i2 = 0; i2 < 5; i2++)
        {
            scanf ("%d", &matriz[i][i2]);
            somaLinha += matriz[i][i2];
            if (i2 == 4) { matriz[i][5] = somaLinha; ranking[i] = somaLinha; }
        }
    }

    //Organizaremos o ranking do menor para o maior;
    qsort(ranking, 5, sizeof(int), comparador);

    int atualRanking = 0; // Localização onde vai ser colocada os numeros.

    //Abaixo faremos a troca de linhas.
    for (i = 4; i >= 0; i--) //o array ranking está em ordem crescente, vamos percorrer de trás para frente.
    {
        for (i2 = 0; i2 < 5; i2++) //procura a linha que tem o maior ranking até o menor. usando o for acima.
        {
            if (ranking[i] == matriz[i2][5] && i2 == 0) //Se já está no lugar certo, vá para o próximo.
            {
                atualRanking++;
                break;
            }
            else if (ranking[i] == matriz[i2][5]) // Troca as posições caso esteja no lugar errado. Troca LINEAR;
            {
                temp = matriz[i2];
                matriz[i2] = matriz[atualRanking];
                matriz[atualRanking++] = temp;
                break;
            }
        }
    }

    imprimirMatriz(matriz);
    free (matriz); //libera a memória usada.
}