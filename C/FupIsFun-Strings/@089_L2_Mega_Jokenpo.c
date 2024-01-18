#include <stdio.h>
#include <string.h>

int main ()
{
    char opcoes[9][10] =
    {
        {"rock"},
        {"fire"},
        {"scissors"},
        {"human"},
        {"sponge"},
        {"paper"},
        {"air"},
        {"water"},
        {"gun"}
    };

    char jog1[100], jog2[100]; scanf ("%s %s", jog1, jog2);
    int i2, i = i2 = 0, jog1id = 0, idtry = 0;
    while(1)
    {
        short Regra1 = strcmp(opcoes[i], jog1) == 0;
        if (*jog1 == *jog2){
            printf ("empate\n");
            return 0;
        }
        else if (Regra1) {
            i++;
            while (1)
            {
                i = i > 8 ? 0 : i;
                short Regra2 = strcmp(opcoes[i], jog2) == 0;
                if (idtry++ < 4 && Regra2){
                    printf ("jog1\n");
                    return 0;
                }else if (idtry > 3) { printf ("jog2\n"); return 0; 
                }else{
                    i++;
                }
            }
        }
        else
        {
            i++;
        }
    }
    
}