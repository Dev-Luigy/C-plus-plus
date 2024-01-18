#include <stdio.h>

int main () 
{
	int count = 1, total = 0;
	while (count <= 200)
	{
		if (count % 3 == 0 && count % 7 != 0)
		{
			total += count;
		}
		count ++;
	}
	printf ("%d", total);
}