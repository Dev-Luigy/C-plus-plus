#include <stdio.h>

int main ()
{
	float N1Q5, N2Q5, N3Q5, Media;
	scanf("%f %f %f", &N1Q5, &N2Q5, &N3Q5);
	Media = (N1Q5 + N2Q5) / 2;
	if (Media < 4)
	{
		printf ("reprovado\n");
	}
	else if (Media >= 4 && Media < 7)
	{
		Media = Media + N3Q5;
		if (Media >= 5)
		{
			printf ("aprovado na final\n")
		}
		else
		{
			printf ("reprovado na final\n")
		}
	}
	else if (Media >= 7)
	{
		printf ("aprovado\n");
	}
}

