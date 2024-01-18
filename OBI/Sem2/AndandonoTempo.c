#include <stdio.h>

int main ()
{
    int A, B, C; scanf ("%d %d %d", &A, &B, &C);

    if (A + B == C || A + C == B || B + C == A || A == B || B == C || A == C) printf ("S\n");
    else printf ("N\n");
}