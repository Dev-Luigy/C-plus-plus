#include <iostream>
#include "jogador.h"
#include "feedback.h"
#include "dataStructures/queue.h"

using namespace std;


int main () {
	Vector<Jogador*> Jogadores;
	Jogador::loadPlayers(Jogadores);
	Feedback temp("Luigy", "Iarinha", "Lhe Adoruuu");
	Feedback temp1("Luigy", "Iarinha", "Lhe Adoruuuawda");
	Jogadores.at(1)->inserirFeedback(temp);
	Jogadores.at(1)->inserirFeedback(temp1);
	Jogadores.at(1)->removerFeedback(0);
	Jogador::mostrarJogadores(Jogadores);

	//Falta apenas limpar o \n quando deleta.
}