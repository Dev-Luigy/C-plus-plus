#include <stdio.h>

in main ()
{
	float N1, N2, N3, Media;
	scanf ("%f %f %f", &N1, &N2, &N3);
	Media = (N1 + N2) / 2
	if (Media >= 7)
	{
		printf ("aprovado\n");
	}
	else if (Media >= 4 && Media < 7)
	{
		Media = (Media + N3) / 2;
		if (Media >= 5)
		{
			printf ("aprovado na final\n");
		}
		else
		{
			printf ("reprovado na final \n");
		}
	}
	else
	{
		printf ("reprovado\n");
	}
}
