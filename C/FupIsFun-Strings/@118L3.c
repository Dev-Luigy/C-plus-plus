#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char * DNA = malloc(20 * sizeof(char));
    char texto[100];
    float count = 0;
    int flag = 0;
    fgets (DNA, 20, stdin);
    DNA = realloc (DNA, strlen(DNA) - 1);
    do
    {
        count = 0;
        scanf ("%s", texto);
        for (int i = 0; i < strlen(texto); i++)
        {
            for (int y = 0; y < strlen(DNA) - 1; y++)
            {
                //printf ("%c e %c\n", DNA[y], texto[i]);
                if (DNA[y] == texto[i]) { count ++; break; }
            }
        }
        count /= (strlen(texto));
        //printf ("%.2f", count);
        if (flag == 0)
        {
            if (count <= 0.5) printf ("pessoa");
            else if (count == 1) printf ("chefe");
            else printf ("ultron");
            flag = 1;
        }
        else
        {
            if (count <= 0.5) printf (" pessoa");
            else if (count >= 1) printf (" chefe");
            else printf (" ultron");   
        }
    } while (fgetc(stdin) != '\n');
    printf ("\n");
    
}