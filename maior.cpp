#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * repeticao (char strings[][50], int tamString){
    char actualString[2];
    do
    {
        for (int i = 0; i < 2; i++) actualString[i] = *strings[0]++;
        // do
        // {
            
        // } while (*strings++);
        printf ("%c e %c\n", *actualString, actualString[1]);
    } while (**strings);
    return actualString;
}

int main (){
    int stringQuant = 0; scanf ("%d", &stringQuant); fgetc(stdin);
    int i = 0;
    char strings[stringQuant][50];



    while(i < stringQuant){
        fgets(strings[i++], 49, stdin);
    }

    char * test = repeticao(strings, 2);
}