#include <stdio.h>

int main ()
{
    long long num1, num2, num3, procNum = 0, sumM = 0;
    num1 = 0;
    num2 = 1;
    num3 = num1+num2;
    scanf ("%lld", &procNum);
    for (int i = 1; num3 <= procNum; i++)
    {
        num1 = num2;
        num2 = num3;
        num3 = num1 + num2;
        num3 % 2 == 0 && num3 <= procNum ? sumM += num3 : sumM;
    }
    printf ("%lld\n", sumM);
}