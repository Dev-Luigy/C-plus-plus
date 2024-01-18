#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * concat(char * array, int op)
{
    static int tamanhototal = 0;
    switch (op)
    {
    case 0: //order.
        tamanhototal += strlen(array);
        char * textos = malloc(tamanhototal * sizeof(char));
        tamanhototal = strlen(textos) + 1;
        while (*array++)
        break;
    case 1:
        //return concat;
        break;
    }
}


int main ()
{
    char strings[100];
    while (fgets(strings, 100, stdin) != "100") { printf ("%s", strings); }

    //char * teste = concat (matriz[0], 0, quanttextos);
    //concat(strings[0], 1, quanttextos);


}