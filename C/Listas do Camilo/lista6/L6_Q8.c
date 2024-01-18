#include <stdio.h>

int main ()
{
    int i2, i = i2 = 0;
    int matriz[3][3], somaColuna[3];
    int somaPadrao = 0, somaLinha = 0;

    somaColuna[0] = somaColuna[1] = somaColuna[2] = 0; //Iguala as somas a 0.

    for (; i < 3; i++)
    {
        somaLinha = 0;
        for (i2 = 0; i2 < 3; i2++)
        {
            scanf ("%d", &matriz[i][i2]);
            int m_a = matriz[i][i2];
            somaLinha += m_a;
            if (i == 0 && i2 == 2) { somaPadrao = somaLinha; }; // Valor padrão pego no fim da primeira linha.


            if (i > 0 && i2 == 2 && somaLinha != somaPadrao) { printf ("não mágico\n"); return 0; }; // verificação por linhas;
            
            // abaixo a soma de colunas.
            if (i2 == 0)      { somaColuna[0] += m_a; if (i == 2 && somaColuna[0] != somaPadrao) { printf ("não mágico\n"); return 0; }}
            else if (i2 == 1) { somaColuna[1] += m_a; if (i == 2 && somaColuna[1] != somaPadrao) { printf ("não mágico\n"); return 0; }}
            else if (i2 == 2) { somaColuna[2] += m_a; if (i == 2 && somaColuna[2] != somaPadrao) { printf ("não mágico\n"); return 0; }}
        }
    }

    //agora temos colunas e linhas conferidas.
    //abaixo faremos verificações horizontais.
    short RegraHorizontal1 = (matriz[0][0] + matriz[1][1] + matriz[2][2]) == somaPadrao;
    short RegraHorizontal2 = (matriz[0][2] + matriz[1][1] + matriz[2][0]) == somaPadrao;

    if (RegraHorizontal1 && RegraHorizontal2) {printf ("mágico\n");}
    else printf ("não mágico\n");
}