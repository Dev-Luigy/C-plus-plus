#include <stdio.h>

//120.51

int main () {
    float total = 0;
    float div = 0;
    int num = 0;
    for (int i = 1; i < 34; i++){
        scanf ("%d", &num);
        div = ((i % 2 == 1 ? 3 : 2) + i);
        total += num/div;
    }

    printf ("%.2f", total);
}