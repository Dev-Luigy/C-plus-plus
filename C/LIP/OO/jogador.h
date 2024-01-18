#ifndef JOGADOR_H
#define JOGADOR_H

#include <iostream>

enum qualidadeJogador{
    //Niveis para goleiro de 0 a 4.
    MaoDeManteiga,
    LuvasDeEspuma,
    Bastiao,
    JulioCezar,
    MuralhaIndestrutivel,

    // abaixo temos os niveis para jogadores,
    Canelada,
    dOutroTime,
    completer,
    Garapeiro,
    PrintAna,
};

enum tipoJogador{
    Goleiro,
    Linha
};

class Jogador{
    public:
    Jogador(std::string nome, qualidadeJogador qualidade, tipoJogador tipo) : nome(nome), tipo(tipo), qualidade(){
        this->qualidade = qualidadeJogador(qualidade + 5 * tipo);
    };

    qualidadeJogador getQualidade(){
        return qualidade;
    }

    tipoJogador getTipo(){
        return tipo;
    }

    std::string getNome(){
        return nome;
    }


    private:
    std::string nome;
    qualidadeJogador qualidade{Canelada};
    tipoJogador tipo{Linha};
};

std::string qualidadeJogadorToString(qualidadeJogador qualidade) {
    switch (qualidade) {
        case MaoDeManteiga:
            return "MaoDeManteiga";
        case LuvasDeEspuma:
            return "LuvasDeEspuma";
        case Bastiao:
            return "Bastiao";
        case JulioCezar:
            return "JulioCezar";
        case MuralhaIndestrutivel:
            return "MuralhaIndestrutivel";
        case Canelada:
            return "Canelada";
        case dOutroTime:
            return "dOutroTime";
        case completer:
            return "completer";
        case Garapeiro:
            return "Garapeiro";
        case PrintAna:
            return "PrintAna";
        default:
            return "";
    }
}

std::string tipoJogadorToString(tipoJogador tipo) {
    switch (tipo) {
        case Goleiro:
            return "Goleiro";
        case Linha:
            return "Linha";
        default:
            return "";
    }
}

#endif // !JOGADOR_H

