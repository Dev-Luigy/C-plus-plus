#include <stdio.h>

int main ()
{
    int n = 0; scanf ("%d", &n);
    int count = 0;
    while (n != 1)
    {
        if (n % 2 == 0) n/=2;
        else n = n * 3 + 1;
        count ++;
    }
    printf ("%d", count);
}