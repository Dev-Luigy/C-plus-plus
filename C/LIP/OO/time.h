#ifndef TIME_H
#define TIME_H

#include <iomanip>
#include <iostream>
#include <vector>
#include "jogador.h"

class Time {
    public:
    Time(std::string nome) :  nome(nome) {};
    void inserirJogador(Jogador* novoJogador){
        Jogadores.push_back(novoJogador);
    }

    void removerJogador(int index){
        Jogadores.erase(Jogadores.begin() + index);
    }

    void imprimirTime() {
        std::vector<Jogador*> goleiros;
        std::vector<Jogador*> linhas;

        for (auto jogador : Jogadores) {
            if (jogador->getTipo() == Goleiro) {
                goleiros.push_back(jogador);
            } else {
                linhas.push_back(jogador);
            }
        }

        std::cout << "Goleiros:" << std::endl;
        for (auto jogador : goleiros) {
            std::cout << std::left << std::setw(15) << jogador->getNome() << " | "
                    << std::setw(10) << tipoJogadorToString(jogador->getTipo()) << " | "
                    << std::setw(20) << qualidadeJogadorToString(jogador->getQualidade()) << " (" << static_cast<int>(jogador->getQualidade()) << ") | "
                    << std::endl;
        }

        std::cout << "Jogadores de linha:" << std::endl;
        for (auto jogador : linhas) {
            std::cout << std::left << std::setw(15) << jogador->getNome() << " | "
                    << std::setw(10) << tipoJogadorToString(jogador->getTipo()) << " | "
                    << std::setw(20) << qualidadeJogadorToString(jogador->getQualidade()) << " (" << static_cast<int>(jogador->getQualidade()) << ") | "
                    << std::endl;
        }
    }


    int getTotalQualidade() const {
        int total = 0;
        for (auto jogador : Jogadores) {
            total += jogador->getQualidade();
        }
        return total;
    }

    std::string getNome(){
        return nome;
    }
    private:
    std::string nome;
    std::vector<Jogador*> Jogadores;
};

#endif // !TIME_H