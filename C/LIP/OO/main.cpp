#include <iostream>
#include "jogador.h"
#include "time.h"
#include <sstream>
#include <vector>
#include <iomanip>
#include "funcoes.h"
#include <unistd.h> 

int main () {
    std::vector<Jogador*> JogadoresDisponiveis;

    while(1){
        int opc = 0;
        system("clear");
        printar();
        std::cin >> opc;

        switch (opc) {
            case 1:
                if (JogadoresDisponiveis.size() == 10){
                    std::cout << "Quantidade máxima" << std::endl;
                    break;
                }
                JogadoresDisponiveis.push_back(AdicionarJogadores());
                break;
            case 2:
                if (!JogadoresDisponiveis.size()){
                    std::cout << "Não existem jogadores" << std::endl;
                    sleep(2);
                    break;
                }
                int index;
                std::cin >> index;
                JogadoresDisponiveis.erase(JogadoresDisponiveis.begin() + index);
                break;
            case 3:
                if(!(JogadoresDisponiveis.size()%2 == 0)){
                    std::cout << "Quantidade impar de jogadores, adicione 1 ou mais." << std::endl;
                    sleep(2);
                    break;
                }

                std::cout << "Escolha o nome dos times: " << std::endl ;
                std::string nomeTimes[2];
                std::cout << "Time 1: "; std::cin >> nomeTimes[0];
                std::cout << "Time 2: "; std::cin >> nomeTimes[1];

                Time time1(nomeTimes[0]);
                Time time2(nomeTimes[1]);
                
                montarEquipes(time1, time2, JogadoresDisponiveis);
                sleep(10);
        }
    }
}