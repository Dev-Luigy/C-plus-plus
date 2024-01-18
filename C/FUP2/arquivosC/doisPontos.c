#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    float X1,Y1,X2,Y2,D;
    scanf("%f %f",&X1, &Y1);
    scanf("%f %f",&X2, &Y2);
    D = sqrt((X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1));
    printf("%.2f\n",D);

    return 0;
}

