#include <stdio.h>

int main ()
{
    int num = 0;
    scanf ("%d", &num);
    int i = 0;

    for ( i = num + 1 ; i <= num + 10; i++)
    {
        printf ("%d ", i);
    }
}