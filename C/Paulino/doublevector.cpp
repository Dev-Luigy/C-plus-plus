#include <iostream>
#include "doublevector.h"

using namespace std;

 DoubleVector::DoubleVector(){
        m_capacity = 16;
        m_list=(int*)malloc(sizeof(int)*m_capacity);
        head = 7;
        tail = 8;
    }

    DoubleVector:: DoubleVector(int n){
        m_capacity = n;
        m_list = (int*)malloc(sizeof(int)*m_capacity);
        head = n/2 - 1;
        tail = n/2;
    }

    DoubleVector:: ~DoubleVector(){
        m_capacity = 0;
        m_size=0;
    }

    int DoubleVector:: capacity() const{
        return m_capacity;
    } 

    int DoubleVector:: size() const{
        return m_size;
    } 

    int DoubleVector::mhead(){
        return head;
    }

    int DoubleVector::mtail(){
        return tail;
    }

    bool DoubleVector:: empty() const{
        if(size() == 0){
            return 1;
        }
        return 0;
    } 

    int DoubleVector:: at(int k) const{
        if(k > -1 && k < size()){
            return m_list[1+ k + head];
        }
        return -1;
    }

    void DoubleVector:: leftShift(){ //deslocamento para a esquerda
        if(head != -1 && tail < m_capacity ){
            for (int i = head; i < tail - 1; i++){
                m_list[i] = m_list[i + 1];
            }
            head++;
            tail--;
            m_size++;
        }   
        else{
            resize();
        }
    }

    void DoubleVector:: rightShift(){ //deslocamento para a direita
        if(tail < m_capacity && head != -1 ){
            for (int i = tail; i > head + 1; i--){
                m_list[i] = m_list[i - 1];
            }
            head++;
            tail--;
            m_size++;
        }   
        else{
            resize();
        }
    }

    void DoubleVector:: resize(){ 
    int* new_m_list = new int[m_capacity * 2];
    for (int i = 0; i < tail; i++) {
        new_m_list[i] = m_list[i];
    }

    delete[] m_list;
    m_list = new_m_list;
    m_capacity = 2 * m_capacity;
    }
    
    void DoubleVector:: push_back(int value){ //insere no final
        if(tail != m_capacity){ //se nao estiver cheio
            m_list[tail++] = value;
            m_size++;
        }
        else{ //se estiver cheio
            leftShift(); //desloca para a direita
            m_list[tail] = value; //insere no final
            tail++;
            m_size++;
        }
    } 
    

     void DoubleVector:: remove(int k){ //remove o elemento na posicao k
        if (k > -1 && k < size()) { //se a posicao for valida
            if (k < size() / 2) {
                for (int i = k; i > 0; i--) {
                    m_list[head + i + 1] = m_list[head + i ]; //desloca para a esquerda
            } 
            head++;
            m_size--; 
            }else {
                for (int i = k; i < size(); i++) { 
                    m_list[head + i + 1] = m_list[head + i + 2]; //desloca para a direita
            }
            tail--;
            m_size--;
            }
        }
    }

     void DoubleVector:: insert(int value, int k){ // insere o elemento na posicao k
        if (k > -1 && k < size()) { //se a posicao for valida
            if (head > m_capacity - tail) { //se a quantidade de elementos a esquerda for maior que a quantidade de elementos a direita
            // Deslocamento para a esquerda
            printf("esquerda \n");
                for (int i = 0; i < k; i++) {
                    m_list[head+i] = m_list[head +1 + i];
                    
                }
                m_list[head + k + 1 ] = value; //insere o elemento na posicao k
                head++;
                m_size++;
            }else{
                // Deslocamento para a direita
                for (int i = tail; i > k; i--) {
                    m_list[i] = m_list[i-1];
                }
                m_list[head + k + 1 ] = value; //insere o elemento na posicao k
                tail--;
                m_size++;
            }
        }
    }

      void DoubleVector:: removeAll(int value){ //remove todas as ocorrencias do elemento
        for(int i=head+1; i<tail; i++){ //percorre o vetor
            if(value == m_list[i]){ //se o elemento for encontrado
                for(int j = i; j<size(); j++){
                    m_list[j] = m_list[j+1]; //desloca para a esquerda
                }
                m_size--;
                i--;
            }
            //printf("(%d, %d)", m_list[i], value);
        }
        //printf("\n");
        
    }

    void DoubleVector:: push_front(int value){ 
        if(head>-1){ //se nao estiver cheio
            m_list[head] = value; //insere no inicio
            head--;
            m_size++;
        }
        else{
            rightShift(); //se estiver cheio, desloca para a esquerda
            m_list[head] = value;
            head--;
            m_size++;
        }
    }  

    int DoubleVector::pop_back() {
        int aux = m_list[tail-1];
        tail--;
        m_size--;
        return aux;
    }

    int DoubleVector::pop_front() {
        int aux = m_list[head+1];
        head++;
        m_size--;
        return aux;
    }
    
     void DoubleVector:: replaceAt(int value, int k){ //substitui o elemento na posicao k
        if(k > -1 && k < size()){ //se a posicao for valida
            m_list[1+k+head] = value;
        }
        return; //se nao for, nao faz nada
    }

    void DoubleVector:: print(){ //imprime o vetor
        for(int i = 0; i < size(); i++){ 
        printf("%d ", at(i)); //imprime o elemento na posicao i
    	printf("\n");
        }
    }

    void DoubleVector:: printReverse(){ //imprime o vetor ao contrario
        for(int i = size() - 1; i > -1; i--){
        printf("%d ", at(i)); //imprime o elemento na posicao i
    	printf("\n");
        }
    }

     void DoubleVector:: concat(DoubleVector& lst){ //concatena dois vetores
        for(int i = 0; i < lst.size(); i++){ 
            push_back(lst.at(i)); //insere os elementos do vetor lst no final do vetor original
        }   
    }
    
     bool DoubleVector:: equals(DoubleVector& lst){ //verifica se dois vetores sao iguais
        if(size() != lst.size()){ //se os tamanhos forem diferentes, nao sao iguais
            return false;
        }
        for(int i = 0; i < size(); i++){ //se os tamanhos forem iguais, verifica se os elementos sao iguais
            if(at(i) != lst.at(i)){ //se algum elemento for diferente, nao sao iguais
                return false;
            }
        }
        return true;
    }
    
    void DoubleVector::PrintAllList(){
        printf("mhead: %d, %d \n", head, tail);
        for(int i = head + 1; i < tail; i++){
            printf("%d ", m_list[i]);
        }
        printf("\n");
    }