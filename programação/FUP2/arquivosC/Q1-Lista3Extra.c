#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () 
{
	int i = 0;
	srand(time(0));
	int arrayNumeros [5];
    for(i = 0; i <= 4; i++) 
    {
        int x = rand() % 61;
        if (i > 0)
        arrayNumeros[i] = x;
        for(int i2 = 0; i2 <= i; i2++) //mudar Variavel e completar.
        {
            if (arrayNumeros == x) { int x = rand() % 61; for(int i3 = 0; i3 <= i2; i3++) { if (arrayNumeros == x) { int x = rand() % 61; }  else { arrayNumeros[i] = x; } } }
            else { arrayNumeros[i] = x; }
        }
        i == 4 ? printf ("%d\n", x) : printf ("%d ", x);
    }
}