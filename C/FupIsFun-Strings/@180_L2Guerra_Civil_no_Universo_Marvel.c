#include <stdio.h>
#include <string.h>

int main ()
{
    int numIntegrantes = 0;
    int i = 0;
    char nomes[100], Enter[1]; char mvp[100];
    int poder = 0, mvpatual = 0,FerroPower = 0, CapitaoPower = 0;

    scanf ("%d", &numIntegrantes);
    fgetc(stdin);
    do
    {
        fgets(nomes, 100, stdin);
        scanf ("%d", &poder);
        fgetc(stdin);
        FerroPower += poder;
        if (poder > mvpatual) { strcpy(mvp, nomes); mvpatual = poder; };
        numIntegrantes--;
    }while (numIntegrantes);

    scanf ("%d\n", &numIntegrantes);
    do
    {
        fgets(nomes, 100, stdin);
        scanf ("%d", &poder);
        fgetc(stdin);
        CapitaoPower += poder;
        if (poder > mvpatual) { strcpy(mvp, nomes); mvpatual = poder; };
        numIntegrantes--;
    }while (numIntegrantes);

    if (FerroPower > CapitaoPower) { printf ("Team Iron Wins\n"); }
    else if (FerroPower < CapitaoPower) {printf ("Team Captain Wins\n");}
    else printf ("Draw\n");
    mvp[strlen(mvp) - 1] = '\0';
    puts(mvp);

}