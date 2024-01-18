#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int array[17] = {
    01000101,
    01110100,
    01101111,

    01110011,
    11100011,
    01000000,

    01110000,
    01100101,
    01100001,
    01110010,
    01110000,
    01110010,

    01100001,
    01101111,
    00111111,
    01100100,
    01110011
};
    for (int i = 0; i < 17; i++)
    {
        int y = 0;
        int total = 0;
        while(array[i])
        {
            total += pow(2, array[i] % 10);
            array[i]/=10;
        }
        printf ("%d ", total);
    }
}