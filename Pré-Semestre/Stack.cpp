#include <iostream>
#include <stack>

using namespace std;

int main ()
{
    stack <int> numeros;
    int num = 1;

    while(1)
    {
        scanf ("%d", &num);
        printf ("%d %d\n", num, numeros.top());
        if (num > numeros.top()) numeros.push(num);
        else if (numeros.size()) numeros.pop();
    }
}