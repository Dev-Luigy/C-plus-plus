#ifndef FEEDBACK_H
#define FEEDBACK_H

#include <iostream>
#include "dataStructures/vector.h"

class Feedback{
    public:
                    Feedback(std::string escritor, std::string jogador, std::string comentario);
    std::string     getJogador();
    std::string     getEscritor();
    std::string     getComentario();
    void            setJogador(std::string newJogador);
    void            setEscritor(std::string novoEscritor); //em casos de mudança do nome do escritor.
    void            setComentario(std::string novoComentario);// em casos de querer mudar o comentário.
    

    private:
    std::string escritor;
    std::string jogador;
    std::string comentario;
};
#include "feedback.cpp"

#endif // !1