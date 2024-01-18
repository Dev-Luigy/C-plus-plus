#include <iostream>

int main () {
    float a = 0;
    for (int i = 1; i <= 20; i++){
        a += 3 * i + 4;
    }
    std::cout << a << std::endl;
}