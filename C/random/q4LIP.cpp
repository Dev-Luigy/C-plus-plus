#include <stdio.h>

int x = 2;
void g(){
    int x = 1;
    auto f = [x]{
        int x = 0;
        auto h = [&x]{
            x = x * 2;
        };
        h();
    };
    f();
    printf ("%d\n", x);
}

int main(){
    g();
    printf("%d\n", x);
    return 0;
}