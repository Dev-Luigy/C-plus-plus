#ifndef JOGADOR_CPP
#define JOGADOR_CPP

#include "dataStructures/vector.h"
#include "jogador.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <istream>
#include <experimental/filesystem>
#include <iomanip>
namespace fs = std::experimental::filesystem;


qualidadeJogador stringToEnumQualidade(std::string& string){
   if (string == "Canelada")
      return Canelada;
   else if (string == "PassesDeVeludo")
      return PassesDeVeludo;
   else if (string == "TalvezJogue")
      return TalvezJogue;
   else if (string == "PrecisaoCirurgica")
      return PrecisaoCirurgica;
   else if (string == "LendaDosRachas")
      return LendaDosRachas;
   else
      return PrintANA;
};

std::string enumToStringQualidade(qualidadeJogador qualidade){
   if (qualidade == Canelada)
      return "Canelada";
   else if (qualidade == PassesDeVeludo)
      return "PassesDeVeludo";
   else if (qualidade == TalvezJogue)
      return "TalvezJogue";
   else if (qualidade == PrecisaoCirurgica)
      return "PrecisaoCirurgica";
   else if (qualidade == LendaDosRachas)
      return "LendaDosRachas";
   else
      return "PrintANA";
};

estiloJogo stringToEnumEstilo(std::string& string){
   if (string == "Goleiro")
      return Goleiro;
   else
      return Linha;
};

std::string enumToStringEstilo(estiloJogo estilo){
   if (estilo == Goleiro)
      return "Goleiro";
   else
      return "Linha";
};


Jogador::Jogador(){}
Jogador::Jogador(std::string nome, std::string idade, estiloJogo estilo, qualidadeJogador qualidade)
    : nome(nome), estilo(estilo), nivel(qualidade) {
    convertStoIdade(*dataNasc, idade);
    std::ofstream writer("src/jogadores.txt", std::ios::app);
    if(!searcPlayerArc(nome)){

        std::ifstream pFile("src/jogadores.txt");
        std::string aux;
        int count{0};
        while(getline(pFile, aux)){
            count ++;
        }
        if (count) // já existe arquivo
            writer << std::endl << nome << " " << idade << " " << enumToStringEstilo(estilo) << " " << enumToStringQualidade(qualidade);
        else // criando arquivo
            writer << nome << " " << idade << " " << enumToStringEstilo(estilo) << " " << enumToStringQualidade(qualidade);
        writer.close();
        pFile.close();
        writer.flush();
    } else { // jogador já existe
        std::stringstream path;
        path << "src/Feedbacks/" << nome << ".txt";
        std::ifstream reader(path.str());
        std::string line;
        std::string feedbackParts[2];
        int i = 0;
        while(getline(reader, line)){
            std::string words;
            std::istringstream lineFile(line);
            while(getline(lineFile, words, '|')){
                feedbackParts[i++%2] = words;
            }
            feedbacks.pushBack(new Feedback(feedbackParts[0], nome, feedbackParts[1]));
        }
        reader.close();
    }
}
void Jogador::inserirFeedback(Feedback& novoFeedback) {
    std::stringstream archive;
    std::string folder = "src/Feedbacks";
    archive << folder << "/" << nome << ".txt";

    std::ifstream inputFile(archive.str());
    if (inputFile.peek() == std::ifstream::traits_type::eof()) {
        std::ofstream writer(archive.str());
        writer << novoFeedback.getEscritor() << "|" << novoFeedback.getComentario() << "|";
        feedbacks.pushBack(new Feedback(novoFeedback.getEscritor(), nome, novoFeedback.getComentario()));
        writer.close();
    } else {
        std::ofstream writer(archive.str(), std::ios::app);
        writer << "\n" << novoFeedback.getEscritor() << "|" << novoFeedback.getComentario() << "|";
        feedbacks.pushBack(new Feedback(novoFeedback.getEscritor(), nome, novoFeedback.getComentario()));
        writer.close();
    }
    inputFile.close();
}

void Jogador::verFeedbacks(){
    std::stringstream archive;
    archive << nome << ".txt";

    std::string Folder = "src/Feedbacks";

    int flag = 0;
    if (Jogador::searcPlayerArc(nome)){ // se existe esse jogador
        if(fs::is_directory(Folder)){ //se existe arquivo sobre ele.
            for (const auto& archives : fs::directory_iterator(Folder)){
                if (archives.path().filename() == archive.str()){
                    std::ifstream reader(archives.path());
                    std::string line;
                    flag ++;
                    while (getline(reader, line)){
                        std::cout << line << std::endl;
                    }
                    reader.close();
                }
            }
        } 
        if (!flag) {
            std::cout << "Não existe Feedbacks sobre esse jogador" << std::endl;
        }
    } else {
        std::cout << "Jogador não existe!" << std::endl;
    }
}

void Jogador::removerFeedback(int index) {
    std::string folder = "src/Feedbacks";
    std::string filePath = folder + "/" + nome + ".txt";
    Vector<Feedback*> novosFeedbacks;

    if (Jogador::searcPlayerArc(nome)) {
        if (fs::is_directory(folder)) {
            if (fs::exists(filePath)) {
                std::ifstream reader(filePath);
                std::ofstream tempWriter("src/temp.txt");
                std::string line;
                std::stringstream lineToRemove;
                lineToRemove << feedbacks.at(index)->getEscritor() << "|" << feedbacks.at(index)->getComentario() << "|";

                int i = 0;
                while (getline(reader, line)) {
                    if (i != index) {
                        tempWriter << line << "\n";
                        std::stringstream splitLine(line);
                        std::string escritor, comentario;
                        getline(splitLine, escritor, '|');
                        getline(splitLine, comentario, '|');
                        novosFeedbacks.pushBack(new Feedback(escritor, nome, comentario));
                    }
                    i++;
                }

                feedbacks.clear();

                Node<Feedback*>* Iterator = novosFeedbacks.nodeAt(0);
                for (int i = 0; i < novosFeedbacks.getSize(); i++){
                    feedbacks.pushBack(Iterator->getValue());
                    Iterator = Iterator->getNext();
                }
                novosFeedbacks.clear();

                reader.close();
                tempWriter.close();

                std::ifstream pFile(filePath);
                std::string aux;
                int count = 0;
                while (getline(pFile, aux))
                    count++;
                pFile.close();

                if (count > 0) {
                    fs::remove(filePath);
                    fs::rename("src/temp.txt", filePath);
                } else {
                    fs::remove(filePath);
                    fs::remove("src/temp.txt");
                }
            } else {
                std::cout << "Não existem feedbacks sobre esse jogador." << std::endl;
            }
        }
    } else {
        std::cout << "Jogador não existe!" << std::endl;
    }
}

void Jogador::setQualidade(qualidadeJogador novaQualidade){
    nivel = novaQualidade;
}
void Jogador::setEstilo(estiloJogo novoEstilo){
    estilo = novoEstilo;
    nivel = Canelada;
}
void Jogador::setCodename(std::string newCodenome){
    codenome = newCodenome;
}
void Jogador::setDataNasc(std::string newData){
    convertStoIdade(*dataNasc, newData);
}
void Jogador::setNome(std::string newNome){
    nome = newNome;
}
bool Jogador::searcPlayerArc(std::string nome){
    std::ifstream path("src/jogadores.txt");
    std::string tempString;
    while(getline(path, tempString)){
        std::istringstream line(tempString);
        std::string tempStringParts;
        while(getline(line, tempStringParts, ' ')){
            if (nome == tempStringParts){
                return true;
            }
        }
    }
    return false;
}

int Jogador::getIdade(){
    std::time_t currentTime = std::time(nullptr);
    std::tm* currentDate = std::localtime(&currentTime);

    int age = currentDate->tm_year + 1900 - dataNasc->tm_year;

    if (currentDate->tm_mon + 1 < dataNasc->tm_mon) {
        age--;
    }

    return age;
}
qualidadeJogador Jogador::getQualidade(){
    return nivel;
}
estiloJogo Jogador::getEstilo(){
    return estilo;
}
std::string Jogador::getCodenome(){
    return codenome;;
}
tm*  Jogador::getDataNasc(){
    return dataNasc;
}
std::string Jogador::getNome(){
    return nome;
}
Vector<Feedback*>* Jogador::getFeedbacks(){
    return &feedbacks;
}

void Jogador::convertStoIdade(tm& idade, std::string novaIdade){
    std::istringstream iss(novaIdade);
    std::string part[3];
    std::string aux;
    
    int i = 0;
    while (std::getline(iss, aux, '/')) {
        part[i++] = aux;
    };

    idade.tm_mday = std::stoi(part[0]);
    idade.tm_mon = std::stoi(part[1]);
    idade.tm_year = std::stoi(part[2]);
}

void Jogador::loadPlayers(Vector<Jogador*>& Jogadores){
    std::string path = "src/jogadores.txt";
    std::ifstream arquivo(path);

    if (arquivo){
        std::string old;
        std::string temp;
        while (getline(arquivo, temp)){
            if (old == temp) break;
            std::istringstream iss(temp);
            std::string word;
            std::string playerPartes[4];
            int i = 0;
            while (getline(iss, word, ' ')){
                playerPartes[i++] = word;
            }
            Jogador* tempJogador = new Jogador(playerPartes[0], playerPartes[1], stringToEnumEstilo(playerPartes[2]), stringToEnumQualidade(playerPartes[3]));
            Jogadores.pushBack(tempJogador);
            old = temp;
        }
    }
    arquivo.close();
}

void Jogador::mostrarJogadores(Vector<Jogador*>& Jogadores) {
    Node<Jogador*>* iterator = Jogadores.nodeAt(0);
    int i = 0;
    std::cout << "+-----+-----------------+------------------------------------------------------------------------+" << std::endl;
    std::cout << "| No. |     Jogador     |                              Feedbacks                                 |" << std::endl;
    std::cout << "|     |                 |                                 MSG                                    |" << std::endl;
    std::cout << "+-----+-----------------+------------------------------------------------------------------------+" << std::endl;
    while (iterator) {
        auto jogador = iterator->getValue();
        std::cout << "| " << std::setw(3) << i++ << " | " << std::setw(15) << jogador->getNome() << " | " << std::setw(72) << "|" << std::endl;

        if (jogador->feedbacks.empty()) {
            iterator = iterator->getNext();
            std::cout << "+-----+-----------------+------------------------------------------------------------------------+" << std::endl;
            continue;
        }
        Node<Feedback*>* feedbackIterator = jogador->feedbacks.nodeAt(0);
        while (feedbackIterator) {
            std::cout << "|     |                 | " << std::setw(71) << feedbackIterator->getValue()->getComentario() << "|" << std::endl;
            feedbackIterator = feedbackIterator->getNext();
        }
        std::cout << "+-----+-----------------+------------------------------------------------------------------------+" << std::endl;
        iterator = iterator->getNext();
    }
}
#endif // !JOGADOR_CPP