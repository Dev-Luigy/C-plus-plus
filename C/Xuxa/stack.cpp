#include "stack.h"
#include <stdexcept>
#include <iostream>

template <typename T>
Stack<T>::Stack() : m_top(nullptr), m_size(0){}

// construtor de copia. A fila lst deve se manter com os mesmo valores.
template <typename T>
Stack<T>::Stack(Stack<T>& lst) {
    Node<T>* aux = lst.m_top;
    Stack<T> stackAux;
    while (aux) {
        stackAux.push(aux->getValue());
        aux = aux->getNext();
    }
    Node<T>* newAux = stackAux.m_top;
    while (newAux){
        push(newAux->getValue());
        newAux = newAux->getNext();
    }
    stackAux.clear();
}

// destrutor: libera memoria alocada
template <typename T>
Stack<T>::~Stack(){
}

// retorna o numero de elementos na lista
template <typename T>
int Stack<T>::size(){
    return m_size;
}

// Retorna true se e somente se a pilha estiver vazia
template <typename T>
bool Stack<T>::empty(){
    return !m_size;
}

// Remove todos os elementos da pilha, ou seja, deixa a pilha vazia
template <typename T>
void Stack<T>::clear(){
    while(!empty())
        pop();  
}

// Insere no topo da pilha
template <typename T>
void Stack<T>::push(T value) {
    m_top = new Node<T>(value, m_top);
    m_size++;
}

template <typename T>
T Stack<T>::pop() {
    if (empty())
        throw std::runtime_error("Empty stack");

    T tempValue = m_top->getValue();
    Node<T>* temp = m_top->getNext();
    delete m_top;
    m_top = temp;
    m_size--;

    return tempValue;
}

template <typename T>
T Stack<T>::top(){
    return m_top->getValue();
}