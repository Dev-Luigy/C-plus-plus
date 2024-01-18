#include <iostream>
#include <list>

using namespace std;

int main (){
    int QuantParticipantes = 1, QuantRodadas = 0;
    int vivos = 0, num = 0, jogada = 0;
    int count = 0, index = 0; 

    while(QuantParticipantes){
        int num;
        cin >> QuantParticipantes >> QuantRodadas;
        int aux[QuantParticipantes];
        list <int> participantes(QuantParticipantes);
        for (int i = 0; i < QuantParticipantes; i++) {
            cin >> num;
            participantes.push_front(num);
            aux[i] = num;
        }

        do{
            index = 0;
            cin >> vivos >> jogada;
            for (int i = 0; i < vivos; i ++){
                cin >> num;
                if (num == jogada) continue;
                index = i;
                while(!aux[index]) index++;
                participantes.remove(aux[index]);
                aux[index] = 0;
            }
        } while (--QuantRodadas);
        cout << "Teste " << ++count << endl << participantes.front() << endl;   
    }
}