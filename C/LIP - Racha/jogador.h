#ifndef JOGADOR_H
#define JOGADOR_H

#include "feedback.h"
#include <ctime>
#include <iostream>
#include "dataStructures/vector.h"
#include <fstream>

enum qualidadeJogador{
   Canelada,
   PassesDeVeludo,
   TalvezJogue,
   PrecisaoCirurgica,
   LendaDosRachas,
   PrintANA
};

enum estiloJogo{
   Goleiro,
   Linha,
};

class Jogador{
public:
                      Jogador           ();
                      Jogador           (std::string nome, std::string idade, estiloJogo estilo, qualidadeJogador qualidade);
   void               inserirFeedback   (Feedback& novoFeedback);
   void               verFeedbacks      ();
   void               removerFeedback   (int index);
   void               setQualidade      (qualidadeJogador novaQualidade);
   void               setEstilo         (estiloJogo novoEstilo);
   void               setCodename       (std::string newCodenome);
   void               setDataNasc       (std::string newData);
   void               setNome           (std::string newNome);
   int                getIdade          ();
   qualidadeJogador   getQualidade      ();
   estiloJogo         getEstilo         ();
   std::string        getCodenome       ();
   tm*                getDataNasc       ();
   std::string        getNome           (); 
   Vector<Feedback*>* getFeedbacks      ();

   //tratativas
   static void       convertStoIdade   (tm& idade, std::string novaIdade);
   static void       loadPlayers       (Vector<Jogador*>& Jogadores);
   static bool       searcPlayerArc    (std::string nome);
   static void       mostrarJogadores  (Vector<Jogador*>& Jogadores);
   

private:
   std::string         nome        {""};
   std::string         codenome    {""};
   std::tm*            dataNasc    {new tm()};
   estiloJogo          estilo      {Linha};
   qualidadeJogador    nivel       {Canelada};
   Vector<Feedback*>   feedbacks;
   
};

#include "jogador.cpp"
#endif // !JOGADOR_H