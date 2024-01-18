#include <stdio.h>

int main ()
{
    int NumeroProcurado = 0, Numero = 0,countDig = 0, Ultimo = 0;
    scanf ("%d %d", &NumeroProcurado, &Numero); 
    while (Numero != 0)
    {
        Ultimo = Numero % 10;
        countDig += Ultimo == NumeroProcurado ? 1 : 0;
        Numero /= 10;
    }
    printf ("%d\n", countDig);
}