#include <stdio.h>

int main ()
{
    int num = 0; scanf ("%d", &num);
    int i = 0;
    int total = 0;
    for (i = 0; i <= num; i++)
    {
        total += i;
    }
    printf ("%d\n", total);
}