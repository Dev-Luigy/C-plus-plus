#include <iostream>
#include <iomanip>
#include "jogador.h"
#include "time.h"
#include <vector>
#include <queue>
#include <bits/stdc++.h>

void printar(){
    std::stringstream firstAndLastLine;
    firstAndLastLine << "|";
    for (int i = 0; i < 25; i++){
        firstAndLastLine << "-";
    }
    firstAndLastLine << "|";
    std::string opcStrings[] = {"Adicionar Jogador", "Remover Jogador", "Sortear times", "Finalizar"};
    std::cout << firstAndLastLine.str() << std::endl;
    std::cout << "|" << std::setw(4) << std::left << "id" << "|" << std::setw(22) << std::left << "Opções:" << "|" << std::endl;
    int i = 1;
    for (auto opcString : opcStrings) 
        std::cout << "|" << std::setw(4) << i++ << "|" << std::setw(20) << std::left << opcString << "|" << std::endl;
    std::cout << firstAndLastLine.str() << std::endl;

    std::cout << "Sua escolha: ";
}

Jogador* AdicionarJogadores(){
    std::string nome;
    std::cout << "Digite o nome: ";
    std::cin >> nome;
    
    int tipoJogadorEscolhido;
    std::cout << "Escolha o tipo do Jogador: " << std::endl;
    std::cout << "1 - Goleiro" << std::endl;
    std::cout << "2 - Linha" << std::endl;
    std::cout << "Sua escolha: ";
    std::cin >> tipoJogadorEscolhido;
    tipoJogadorEscolhido--;

    std::string qualidadeJogadores[] = {
    //Niveis para goleiro de 0 a 4.
        "MaoDeManteiga",
        "LuvasDeEspuma",
        "Bastiao",
        "JulioCezar",
        "MuralhaIndestrutivel",

    // abaixo temos os niveis para jogadores,
        "Canelada",
        "dOutroTime",
        "completer",
        "Garapeiro",
        "PrintAna",
    };

    int constante = 5 * tipoJogadorEscolhido;
    int index = 1;
    for (int i = 0 + constante; i < 5 + constante; i++) {
        std::cout << index << "-" << qualidadeJogadores[i] << std::endl;
        index++;
    }
    int escolha {0};
    std::cout << "Sua escolha: ";
    std::cin >> escolha;
    escolha--;

    return new Jogador(nome, static_cast<qualidadeJogador>(escolha), static_cast<tipoJogador>(tipoJogadorEscolhido));
}

void montarEquipes(Time& time1, Time& time2, std::vector<Jogador*>& JogadoresDisponiveis) {
    std::sort(JogadoresDisponiveis.begin(), JogadoresDisponiveis.end(), [](Jogador* jogador1, Jogador* jogador2) {
        return jogador1->getQualidade() < jogador2->getQualidade();
    });

    Jogador* goleiroTime1 = nullptr;
    Jogador* goleiroTime2 = nullptr;

    // Find the first two goalkeepers with the lowest quality
    for (auto jogador : JogadoresDisponiveis) {
        if (jogador->getTipo() == Goleiro) {
            if (!goleiroTime1) {
                goleiroTime1 = jogador;
            } else if (!goleiroTime2) {
                goleiroTime2 = jogador;
            }
        }
        if (goleiroTime1 && goleiroTime2)
            break;
    }

    if (!goleiroTime1 || !goleiroTime2) {
        std::cout << "Não há jogadores suficientes para formar os times." << std::endl;
        return;
    }

    time1.inserirJogador(goleiroTime1);
    time2.inserirJogador(goleiroTime2);

    int i = 0;
    for (auto jogador : JogadoresDisponiveis) {
        if (jogador == goleiroTime1 || jogador == goleiroTime2)
            continue;

        if (i++ % 2 == 0) {
            if (time1.getTotalQualidade() < time2.getTotalQualidade()) {
                time1.inserirJogador(jogador);
            } else {
                time2.inserirJogador(jogador);
            }
        } else {
            if (time2.getTotalQualidade() < time1.getTotalQualidade()) {
                time2.inserirJogador(jogador);
            } else {
                time1.inserirJogador(jogador);
            }
        }
    }

    std::cout << time1.getNome() << std::endl;
    time1.imprimirTime();
    std::cout << std::endl;
    std::cout << time2.getNome() << std::endl;
    time2.imprimirTime();
}
