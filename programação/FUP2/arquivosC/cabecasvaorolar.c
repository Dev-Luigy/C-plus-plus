#include <stdio.h>

int main () 
{
    int quantPessoas; scanf ("%d", &quantPessoas);
    int aPessoas[quantPessoas];
    int Menor = 100, Killer = 0, vivos = quantPessoas;
    for(int i = 0; i < quantPessoas; i++) //mudar Variavel e completar.
    {
        aPessoas[i] = i + 1; 
    }
    scanf ("%d", &Killer);
    while (vivos > 1)
    {
        Menor = 100;
        for(int i = 0; i < quantPessoas; i++) //mudar Variavel e completar.
        {
            //printf ("%d <= %d ? \n", aPessoas[i], Killer);
            if (aPessoas[i] <= Killer && aPessoas[i] != 0)
            {
                aPessoas[i] += 10;
            }
            Menor = Menor > aPessoas[i] && aPessoas[i] != 0 && aPessoas[i] != Killer ? aPessoas[i] : Menor;
        } // atribui o menor numero ao proximo a ser morto.

        for(int i = 0; i < quantPessoas; i++) //mudar Variavel e completar.
        {
           //printf ("\n%d = %d? ", aPessoas[i], Menor);
           vivos -= aPessoas[i] == Menor && aPessoas != 0 ? 1 : 0;
           aPessoas[i] = aPessoas[i] == Menor && aPessoas != 0 ? 0 : aPessoas[i];
           //printf ("%d\n", vivos);
           //printf ("\n%d = %d? ", aPessoas[i], Menor);
        } // Mata a pessoa.
        
        for(int i = 0; i < quantPessoas; i++) //mudar Variavel e completar.
        {
            if (i != quantPessoas - 1)
            {
                if (aPessoas[i] > Killer && aPessoas[i] != 0) Killer = aPessoas[i];
            }
            else
            {
                Killer = Menor > aPessoas[i] && aPessoas[i] != 0 && aPessoas[i] != Killer ? aPessoas[i] : Menor;
            }
        }

        for(int i = 0; i < quantPessoas; i++) //mudar Variavel e completar.
        {
            printf ("%d ", aPessoas[i]);
        }
        printf ("\n");

        for(int i = 0; i < quantPessoas; i++) //mudar Variavel e completar.
        {
            aPessoas[i] -= aPessoas[i] >= 10 ? 10 : 0 ;
        } // atribui o menor numero ao proximo a ser morto.


        //printf ("\n%d - Killer\n",Killer);

    }
    for(int i = 0; i < quantPessoas; i++) //mudar Variavel e completar.
    {
        printf ("%d ",aPessoas[i]);
    }
}