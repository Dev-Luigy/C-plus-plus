#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float carros[10][4];
    int y, i = y = 0;
    for (i = 0 ; i < 10; i++)
    {
        for (y = 0; y < 3; y++)
        {
            scanf ("%f", &carros[i][y]);
            
            if (y == 2) 
            { 
                carros[i][3] = carros[i][1] / carros[i][2];
            }
        }
        printf ("%10s %10s %10s %10s\n",
        "Chassis","KM","Gasolina","KM/L");
        for (int i2 = 0 ; i2 <= i; i2++)
        {
            for (int y2 = 0; y2 <= y; y2++)
            {
                y2 == 0 ? printf ("%10.0f ", carros[i2][y2]) : printf ("%10.2f ", carros[i2][y2]);
            }
            printf ("\n");
        }
    }
}