#include <stdio.h>

int main () 
{
    int quantNumeros = 0, quantTestes = 0; scanf ("%d %d", &quantNumeros, &quantTestes); quantNumeros++, quantTestes++;
    int Cofre[10][2], aTestes[quantTestes], CofreOrganizado[quantNumeros][2];
    for(int i1 = 0; i1 <= quantNumeros - 2; i1++) //mudar Variavel e completar.
    {
        Cofre[i1][0] = 0; 
        scanf ("%d", &Cofre[i1][0]); // Numeros;
        Cofre[i1][1] = 0; // Contador
        Cofre[0][1] = 1; //Primeiro sempre recebe 1;
    }
    for(int i = 0; i <= quantTestes - 2; i++) //mudar Variavel e completar.
    {
        scanf ("%d", &aTestes[i]);
        if (i >= 1)
        {
            //printf ("%d > %d ? ", aTestes[i] - 1 , aTestes[i-1] - 1);
            if (aTestes[i] - 1 < aTestes[i-1] - 1)
            {
                for(int i2 = aTestes[i - 1] - 2; i2 >= aTestes[i] - 1; i2--) //mudar Variavel e completar.
                {
                    //printf ("a = %d = %d; %d >= %d; %d --", i2, aTestes[i - 1] - 2, i2, aTestes[i] - 1, i2);
                    Cofre[i2][1] += 1;
                    //printf ("%d a\n",Cofre[i2][1]);
                }
            }
            else
            {
                for(int i2 = aTestes[i - 1]; i2 <= aTestes[i] - 1; i2++) //mudar Variavel e completar.
                {
                    Cofre[i2][1] += 1;
                    //printf ("%d b\n",Cofre[i2][1]);
                }
            }
        }
    }
    for(int i = 0; i <= 9; i++) //mudar Variavel e completar.
    {
        CofreOrganizado[i][0] = i;
        CofreOrganizado[i][1] = 0;
        //printf (" %d ", CofreOrganizado[i][0]);
        for(int i2 = 0; i2 <= quantNumeros - 2; i2++) //mudar Variavel e completar.
        {
            if (CofreOrganizado[i][0] == Cofre[i2][0])
            {
                //printf ("%d %d \n", CofreOrganizado[i][0], Cofre[i2][0]);
                CofreOrganizado[i][1] += Cofre[i2][1];
            }
        }
    }
    //printf ("\n");
    printf ("[");
    for(int i = 0; i <= 9; i++) //mudar Variavel e completar.
    {
        printf (" %d", CofreOrganizado[i][1]);
    }
    printf (" ]\n");
}