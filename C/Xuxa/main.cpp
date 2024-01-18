#include <iostream>
#include <string>
#include "stack.cpp"

using namespace std;

int main() {
    Stack<char> pilha;
    std::string frase{""};
    std::getline(std::cin, frase);
    frase.push_back('\n');
    int i = 0;
    while (i < frase.length()) {
        if (frase[i] != ' ' && frase[i] != '\n') {
            pilha.push(frase[i++]);
            continue;
        }
        else{
            while (!pilha.empty())
                std::cout << pilha.pop();
            cout << " ";
        }
        i++;
    }
    // Stack<char> pilha2(pilha);
    // while(!pilha2.empty())
    //     cout << pilha2.pop();
    // std::cout << std::endl;
    return 0;
}