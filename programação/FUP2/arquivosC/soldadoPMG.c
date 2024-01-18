#include <stdio.h>

int main ()
{
    int quantSoldados = 0;
    double Media = 0;
    scanf ("%d", &quantSoldados);
    quantSoldados ++;
    double idSoldado[quantSoldados];
    for (int i = 0; i < quantSoldados - 1; i++)
    {
        scanf ("%lf", &idSoldado[i]);
        Media += idSoldado[i];
    }
    Media /= quantSoldados - 1;
    printf ("%.2lf", Media);
    for (int soldadoAtual = 0; soldadoAtual < quantSoldados - 1; soldadoAtual++)
    {
        if (idSoldado[soldadoAtual] == Media) {  printf ("M"); }
        else if (idSoldado[soldadoAtual] > Media) {  printf ("G"); }
        else {  printf ("P"); };
        if (soldadoAtual < quantSoldados - 2) { printf (" "); }
    }
    printf ("\n");
}