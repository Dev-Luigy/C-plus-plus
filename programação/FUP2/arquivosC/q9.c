#include <stdio.h>

int main () 
{
	int Numero = 0, Count = 1, Possb = 0;
    scanf ("%d", &Numero);
    for (Count = 1; Count <= Numero; Count ++)
    {
        Numero % Count == 0 && Numero/Count <= Count ? printf ("(%d x %d)", Numero/Count, Count) : printf ("");
        Numero % Count == 0 && Numero/Count <= Count && Numero / Count != 1 ? printf (", ") : printf ("");
    }
    printf (".");
}

