#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float ** carros = (float **) malloc (10 * sizeof(float*));
    for (int i = 0; i < 10; i++) *(carros + i) = (float*)malloc(4 * sizeof(float));
    int i, y = i = 0;

    for (; i < 10; i++)
    {   
        for( y = 0; y < 3; y++)
        {
            scanf ("%f", *(carros + i) + y);

            if ( y == 2 ) *(*(carros + i) + y + 1) = *(*(carros + i) + 1) / *(*(carros + i) + 2); 
        }
        printf("%10s%10s%10s%10s\n",
        "Chassis","KM","Litros","KM/L");
        for(int i2 = 0; i2 <= i ; i2 ++)
        {
            for (int y2 = 0; y2 <= 3; y2++)
            {
                y2 == 0 ? printf ("%10.0f", *(*(carros + i2) + y2)) : printf ("%10.2f", *(*(carros + i2) + y2)); 
            }
            printf ("\n");
        }
    }

    free (carros);
}