#include <stdio.h>

int main ()
{
    int A,B,S = A = B = 0; scanf ("%d%d%d", &S, &A, &B);
    int i = A, y = 0;
    int counter = 0, total = 0;
    while (i <= B)
    {
        do
        {
            total += i % 10;
            i/=10;
            //printf ("%d e %d\n", total, i);
        } while (i > 0);
        if (total == S) counter ++;
        total = 0;
        y ++;
        i += y + A;
    }
    printf ("%d\n", counter);
}