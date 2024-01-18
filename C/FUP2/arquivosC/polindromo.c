#include <stdio.h>

int main ()
{
    int Numero = 0, NumeroInvertido = 0, Ultimo = 0;
    scanf ("%d", &Numero);  int NumeroAntigo = Numero;
    while (Numero != 0)
    {
        Ultimo = Numero % 10;
        NumeroInvertido = (NumeroInvertido * 10) + Ultimo;
        Numero /= 10; 
    }
    NumeroAntigo == NumeroInvertido ? printf ("1\n") : printf ("0\n");
}