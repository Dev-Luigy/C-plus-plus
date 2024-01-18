#ifndef NODE_CPP
#define NODE_CPP

#include "node.h"

//constructors
template<typename T>
Node<T>::Node(T value) 
    : value(value){}

template<typename T>
Node<T>::Node(T value, Node<T>* next) 
    : value(value), next(next){}

template<typename T>
Node<T>::Node(T value, Node<T>* next, Node<T>* prev) 
    : value(value), next(next), prev(prev){}



template<typename T>
T Node<T>::getValue(){
    return value;
}

template<typename T>
Node<T>* Node<T>::getNext(){
    return next;
}

template<typename T>
Node<T>* Node<T>::getPrev(){
    return prev;
}

template<typename T>
void Node<T>::setValue(T newValue){
    value = newValue;
}

template<typename T>
void Node<T>::setNext(Node<T>* newNext){
    next = newNext;
}

template<typename T>
void Node<T>::setPrev(Node<T>* newPrev){
    prev = newPrev;
}
#endif