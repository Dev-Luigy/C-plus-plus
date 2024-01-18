#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main ()
{
	int testcases = 0; 	scanf ("%d", &testcases);
						fgetc(stdin);
	char str[10];
	char * yes = "yes";
	
	int i,y = i = 0;
	
	do
	{
		y = 0;
		fgets(str, 10, stdin);
		for (i = 0; i < strlen(str) - 1; i++)
		{
			if (tolower(str[i]) != yes[i])
			{
				printf ("NO\n");
				y = 1;
				break;
			}
		}
		if (y != 1) printf ("YES\n");
	}while (--testcases);
}
