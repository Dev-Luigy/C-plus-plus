#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () 
{
	int i = 0, i2 = 0, i3 = 0;
	srand(time(NULL));
	int arrayNumeros [5];
    for(i = 0; i <= 5; i++) 
    {
        int x = rand() % 60 + 1;
        if (i == 0) arrayNumeros[i] = x;
        if (i > 0)
        for(i2 = 0; i2 < i; i2++)
        {
        	//printf ("%d a\n", arrayNumeros[i2]);
            if (arrayNumeros[i2] == arrayNumeros[i]) { i--; int x = rand() % 60 + 1; }
        }
        i == 5 ? printf ("%02d\n", x) : printf ("%02d ", x);
    }
}
