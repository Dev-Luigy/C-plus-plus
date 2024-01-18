#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A, B, Total = 0;
	scanf ("%d %d", &A, &B);
    if (A > B)
	{
	    printf ("invalido\n");
	    exit (0);
	}
	while (A <= B)
	{
		if (A % 2 == 0)
		{
			Total += A;
		}
		A++;
    }
    printf ("%d\n", Total);
}

