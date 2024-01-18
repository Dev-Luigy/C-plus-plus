#ifndef FEEDBACK_CPP
#define FEEDBACK_CPP

#include "feedback.h"
#include <iostream>

Feedback::Feedback(std::string escritor, std::string jogador, std::string comentario)
    : escritor(escritor),jogador (jogador), comentario(comentario){}
std::string Feedback::getJogador(){
    return jogador;
}
std::string Feedback::getEscritor(){
    return escritor;
}
std::string Feedback::getComentario(){
    return comentario;
}
void Feedback::setEscritor(std::string novoEscritor){
    escritor = novoEscritor;
} //em casos de mudança do nome do escritor.
void Feedback::setComentario(std::string novoComentario){
    comentario = novoComentario;
}// em casos de querer mudar o comentário.


#endif // !FEEDBACK_CPP