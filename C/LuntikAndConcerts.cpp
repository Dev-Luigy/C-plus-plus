#include <stdio.h>
#include <stdlib.h>

int main (){
    int musics[3] = {};
    int quantTest = 0;  scanf ("%d", &quantTest);
    int half = 0;
    int total = 0;

    do{
        total = 0;
        half = 0;
        for (int i = 0; i < 3; i++){
            scanf ("%d", &musics[i]);
            total += musics[i] * (i + 1);
        }
        half = total/2;

        printf ("%d\n", total % half > 0 ? total % half : -total % half);
    }while(--quantTest);
}