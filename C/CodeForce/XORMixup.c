#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int quantTest, quantNum = quantTest = 0; scanf ("%d", &quantTest);
    int total = 0, y = 0, flag = 0;
    do
    {
        y = 0;
        flag = 0;
        scanf ("%d", &quantNum); int array[quantNum];
        for (int i = 0; i < quantNum; i++) { scanf ("%d", &array[i]); }
        for (int o = 0; o < quantNum; o++)
        {
            total = 0;
            for (int i = 0; i < quantNum; i++)
            {
                if (i != y) total = total ^ array[i];
            }
            for (int i = 0; i < quantNum; i++)
            {
                if (total == array[i]) { printf ("%d\n", total); flag = 1; break; }
            }
            if (flag == 1) break;
            y++;
        }
        if (flag == 0) printf ("0\n");
    } while (--quantTest);
    
}