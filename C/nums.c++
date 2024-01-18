#include <iostream>
#include <fstream>
#include <string>

std::string vetor[252526];

int main (){
    std::ofstream Escritor("Trios.txt");
    for (int i = 1; i <= 25; i++){
        for(int j = 1; j <= 25; j++){
            for (int k = 1; k <= 25; k++){
                if(i == j || i == k || j == k) continue;
                int menor =  i < j && i < k ? i : 
                             j < i && j < k ? j :
                             k < i && k < j ? k : 0;
                int maior =  i > j && i > k ? i : 
                             j > i && j > k ? j :
                             k > i && k > j ? k : 0;
                int meio =   i != menor && i != maior ? i :
                             j != menor && j != maior ? j :
                             k; 
                if(vetor[stoi(std::to_string(menor) + std::to_string(meio)+ std::to_string(maior))][0]) continue;
                vetor[stoi(std::to_string(menor) + std::to_string(meio)+ std::to_string(maior))] = std::to_string(i) + " " + std::to_string(j) + " " + std::to_string(k);
                Escritor << vetor[stoi(std::to_string(menor) + std::to_string(meio)+ std::to_string(maior))] << "\t";
            }
        }
    }
}