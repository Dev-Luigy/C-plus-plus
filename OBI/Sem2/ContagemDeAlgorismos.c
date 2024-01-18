#include <stdio.h>
#include <string.h>

int main ()
{
    int quantNumeros = 0; scanf ("%d", &quantNumeros);
    char numero[100];
    int i = 0, i2 = 0, i3 = 0;
    int tamNumero = 0;

    int numeros[10][2];

    for (i = 0; i < 10; i ++)
    {
        numeros[i][0] = i;
        numeros[i][1] = 0;
    }

    for (i = 0; i <= quantNumeros; i++)
    {
        fgets (numero, 100, stdin); //adquiri a variável;
        tamNumero = strlen(numero);
        for (i2 = 0; i2 < tamNumero; i2 ++)
        {
            for (i3 = 0; i3 < 10; i3++)
            {
                if (numero[i2]-48 == numeros[i3][0]) numeros[i3][1] ++;
            }
        }
    }

    for (i = 0; i < 10; i ++)
    {
        printf ("%d - %d\n", numeros[i][0], numeros[i][1]);
    }
}