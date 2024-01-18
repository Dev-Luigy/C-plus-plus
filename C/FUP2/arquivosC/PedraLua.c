#include <stdio.h>

int main ()
{
    int numeroCompetidor = 0, Menor = 100, idMenor = 0, countDesclassificados = 0;
    scanf ("%d", &numeroCompetidor);
    numeroCompetidor ++;
    int ArrayCompetidores[numeroCompetidor][3], diferencaCompetidores[numeroCompetidor], desclassificadosCompetidores[numeroCompetidor][3];
    for (int i = 0; i < numeroCompetidor - 1; i++)
    {
        diferencaCompetidores[i] = 0;
        for (int i2 = 0; i2 < 2; i2++)
        {
            ArrayCompetidores[i][i2] = 0;
            scanf ("%d", &ArrayCompetidores[i][i2]);
            ArrayCompetidores[i][i2] < 10 ? ArrayCompetidores[i][i2] = 0 : ArrayCompetidores[i][i2];
            desclassificadosCompetidores[i][i2] = ArrayCompetidores[i][i2] < 10 ? i : 100 ;
        }
        countDesclassificados += desclassificadosCompetidores[i][0] == 100 && desclassificadosCompetidores[i][1] == 100 ? 0 : 1;
        diferencaCompetidores[i] = ArrayCompetidores[i][1] - ArrayCompetidores[i][0] > 0 ? ArrayCompetidores[i][1] - ArrayCompetidores[i][0] : ArrayCompetidores[i][0] - ArrayCompetidores[i][1];
    }
    for (int testador = 0; testador < numeroCompetidor - 1; testador++)
    {
        if (diferencaCompetidores[testador] < Menor && desclassificadosCompetidores[testador][0] == 100 && desclassificadosCompetidores[testador][1] == 100) { Menor = diferencaCompetidores[testador]; idMenor = testador; }
    }
    if (countDesclassificados == numeroCompetidor - 1)
    {
        printf ("sem ganhador\n");
    }
    else
    {
        printf ("%d\n", idMenor);
    }
}