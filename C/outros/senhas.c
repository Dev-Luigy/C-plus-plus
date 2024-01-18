#include <stdio.h>
#include <string.h>

int main ()
{
    int tamSenha = 0, quantSenhas = 0; scanf ("%d%d\n", &tamSenha, &quantSenhas);
    char caracteres[100], senhainicial[100];
    int iSenhas[tamSenha];


    fgets(caracteres, 100, stdin);
    fgets(senhainicial, 100, stdin);

    for (int i = 0; i < tamSenha; i++)
    {
        for (int i2 = 0; i2 < strlen(caracteres); i2 ++)
        {
            if (caracteres[i2] == senhainicial[i]) iSenhas[i] = i2;
        }
    }

    int tamCaracteres = strlen(caracteres);
    int i = iSenhas[tamSenha - 1], j = 0;
    iSenhas[tamSenha - 1]++;

    while (quantSenhas)
    {
        j = tamSenha - 1;
        do
        {
            if (iSenhas[j] >= tamCaracteres - 1)
            {
                iSenhas[j] = 0;
                iSenhas[j - 1]++;
            }
            if (iSenhas[0] >= tamCaracteres - 1) iSenhas[0] = 0;
            j--;
        } while (j != 0);
        do
        {
            printf ("%c", caracteres[iSenhas[j++]]);
        } while (j < tamSenha);
        iSenhas[tamSenha - 1]++;
        printf ("\n");
        quantSenhas--;
    }
}