#include <stdio.h>

int main ()
{
    int quantParticipantes, pontos = 0; scanf ("%d %d", &quantParticipantes, &pontos);
    int aParticipantes[quantParticipantes][2]; 
    int i = 0,i2 = 0, count = 0;
    for (i = 0; i < quantParticipantes; i++)
    {
        for (i2 = 0; i2 < 2; i2++)
        {
            scanf ("%d", &aParticipantes[i][i2]);
            count += i2 == 1 && aParticipantes[i][0] + aParticipantes[i][1] >= pontos ? 1 : 0;
        }
    }
    printf ("%d\n", count);
}