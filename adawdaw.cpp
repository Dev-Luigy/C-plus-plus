#include <stdio.h>
int letters[26];
int main(){
    char into[2];
    int counter = 0;
    int astCounter = 0;

    do
    {
        scanf (" %c", into);
        if(!letters[into[0]]++) ++counter;
    } while (into[0] != '\n');

    --counter;
    for (;counter--;){
        scanf (" %c", into);
        if (into[0] >= 'a' && into[0] <= 'z' && letters[into[0]] > 0)  letters[into[0]]--; 
        else if (into[0] == '*') {
            int i = 0; 
            while(letters[i++] == 0 && i < 26)
            if (i > 'z') { printf ("N\n"); return 0; }
            else letters[i]--;
        }
        else{
            printf ("N\n"); return 0;
        }
    }
    printf ("S\n");
}