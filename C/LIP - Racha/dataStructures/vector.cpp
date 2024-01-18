#ifndef VECTOR_CPP
#define VECTOR_CPP
#include <stdexcept>
#include "vector.h"
#include <iostream>

template<typename T>
Vector<T>::Vector(){};
template<typename T>
Vector<T>::Vector(const Vector<T>& src){
    Node<T>* iterator = src.first;
    while(iterator){
        pushBack(iterator->getValue());
        iterator = iterator->getNext();
    }
}
template<typename T>
Vector<T>::~Vector(){
    clear();
}

// Bool & Informatives.
template<typename T>
int Vector<T>::getSize(){
    return m_size;
}
template<typename T>
bool Vector<T>::empty(){
    return !m_size;
}
template<typename T>
T Vector<T>::at(int index){
    Node<T>* aux = nodeAt(index);
    return aux->getValue();
}
template<typename T>
void Vector<T>::print(){
    Node<T>* iterator = first;
    while(iterator){
        std::cout << iterator->getValue() << " ";
        iterator = iterator->getNext();
    }
    std::cout << std::endl;
}

// Add Values.
template<typename T>
void Vector<T>::pushFront(T value) {
    if (empty()) {
        first = last = new Node<T>(value);
    } else {
        Node<T>* newFirst = new Node<T>(value, first, nullptr);
        first->setPrev(newFirst);
        first = newFirst;
    }
    m_size++;
}

template<typename T>
void Vector<T>::pushBack(T value) {
    if (empty()) {
        first = last = new Node<T>(value);
    } else {
        Node<T>* newLast = new Node<T>(value, nullptr, last);
        last->setNext(newLast);
        last = newLast;
    }
    m_size++;
}

template<typename T>
T Vector<T>::popFront() {
    if (empty())
        throw std::runtime_error("Não é possível remover valor, vetor vazio.");
    m_size--;
    T value = first->getValue();
    Node<T>* aux = first;
    first = first->getNext();
    if (first)
        first->setPrev(nullptr);
    else
        last = nullptr;
    delete aux;
    return value;
}

template<typename T>
T Vector<T>::popBack() {
    if (empty())
        throw std::runtime_error("Não é possível remover valor, vetor vazio.");
    m_size--;
    T value = last->getValue();
    Node<T>* aux = last;
    last = last->getPrev();
    if (last)
        last->setNext(nullptr);
    else
        first = nullptr;
    delete aux;
    return value;
}

template<typename T>
void Vector<T>::insertAt(int index, T value){
    Node<T>* iterator = nodeAt(index);

    Node<T>* newNode = new Node<T>(value, iterator, iterator->getPrev());
    newNode->getNext()->setPrev(newNode);
    newNode->getPrev()->setNext(newNode);
    m_size++;
}

template<typename T>
void Vector<T>::replaceAt(int index, T value){
    nodeAt(index)->setValue(value);
}

template<typename T>
void Vector<T>::removeAt(int index){
    Node<T>* temp = nodeAt(index);
    if (temp->getPrev())
        temp->getPrev()->setNext(temp->getNext());
    if (temp->getNext())
        temp->getNext()->setPrev(temp->getPrev());
    m_size--;
    delete temp;
}

template<typename T>
void Vector<T>::removeAll(T value){
    while (first->getValue() == value){
        popFront();
    }
    Node<T>* iterator = first->getNext();
    for (int i = 1; i < getSize() - 1; i++){
        if (iterator->getValue() == value){
            iterator = iterator->getPrev();
            Node<T>* temp = iterator->getNext();
            if (temp->getPrev())
                temp->getPrev()->setNext(temp->getNext());
            if (temp->getNext())
                temp->getNext()->setPrev(temp->getPrev());
            m_size--;
            i--;
            continue;
        }
        iterator = iterator->getNext();
    }
    if (last->getValue() == value){
        popBack();
    }
}

template<typename T>
Node<T>* Vector<T>::nodeAt(int index){
    if (empty() || index >= m_size) 
        throw std::runtime_error("Não é possivel remover valor, vector vazio.");
    Node<T>* iterator = first;
    for (int i = 0; i < index; i++)
        iterator = iterator->getNext();

    return iterator;
}


template<typename T>
void Vector<T>::clear(){
    while(!empty())
        popBack();
}


#endif // !VECTOR_CPP
