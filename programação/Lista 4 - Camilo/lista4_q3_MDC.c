#include <stdio.h>

int MDC (int a, int b)
{
    int menor, MDC = 0, i;
    menor = a > b ? b : a ;
    for(i = 1; i <= menor; i++)
    {
        MDC = a % i == 0 && b % i == 0 ? i : MDC ;
    }
    return MDC;
}

int main () 
{
    int a, b; scanf ("%d %d", &a, &b);
    printf ("%d\n", MDC(a,b));
}
