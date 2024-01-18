#include <iostream>
#include "lista.cpp"

using namespace std;

int main () {
    Lista cobra2Cabeça;
    cobra2Cabeça.add(5);
    for(int i = 0; i < cobra2Cabeça.getSize(); i++){
        cout << cobra2Cabeça.at(i) << endl;
    }
    cobra2Cabeça.removeNode(0);
}