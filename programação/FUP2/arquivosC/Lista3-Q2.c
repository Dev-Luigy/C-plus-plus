#include <stdio.h>

int main () 
{
	int count = 249;
	while (count >= 0)
	{
		if (count % 2 == 0)
		{
			count >= 2 ? printf ("%d, ", count) : printf ("%d.\n", count) ;
		}
		count --;
	}
}
