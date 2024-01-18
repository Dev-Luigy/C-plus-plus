#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char strings[3][10];
    char stringFinal[30];

    for (int i = 0; i < 3; i++)
    {
        fgets(strings[i], 10, stdin); strings[i][strlen(strings[i]) - 1] = '\0';
        if (strstr(strings[i], "abc") || strlen(strings[i]) < 3) continue;
        strcat(stringFinal, strings[i]);
    }

    printf ("%s", stringFinal);
}