#include <stdio.h>
#include <stdlib.h>

int calcCaracteres(const int a, const int b, char * op)
{
     switch (op[1])
     {
     case '-':
        return ((a - 97) - (b - 97)) + 97 < 97 ? 123 - abs (((a - 97) - (b - 97))) : ((a - 97) - (b - 97)) + 97; 
        break;
     case '+':
        return ((a - 97) + (b - 97)) + 97 > 122 ? 96 + abs((((a - 97) + (b - 97)) + 97) - 122) : ((a - 97) + (b - 97)) + 97;
        break;
     }
}

int main ()
{
    char op[4];
    for (int i = 0; i < 3; i++) { scanf ("%c", &op[i]); if ((op[i] < 97 || op[i] > 122) && (op[i] != 43 && op[i] != 45)) i--; }
    printf("%c\n", calcCaracteres(op[0], op[2], op));
}