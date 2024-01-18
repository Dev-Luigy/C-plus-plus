#include <stdio.h>

int main ()
{
    int num; scanf ("%d", &num);
    int i = 0;
    for (i = 1; i <= num; i++)
    {
        if ((num % i) == 0) { printf ("%d ", i); }
    }
}