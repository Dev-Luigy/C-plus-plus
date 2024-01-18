#include <stdio.h>

int main ()
{
    float num1, num2, num3, procNum = 0;
    num1 = 0;
    num2 = 1;
    num3 = num1+num2;
    scanf ("%f", &procNum);
    for (int i = 3; i <= procNum; i++)
    {
        num1 = num2;
        num2 = num3;
        num3 = num1 + num2;
    }
    printf ("%.0f\n", num3);
}