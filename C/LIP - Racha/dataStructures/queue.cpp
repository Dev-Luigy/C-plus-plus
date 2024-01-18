#ifndef QUEUE_CPP
#define QUEUE_CPP

#include "node.h"
#include "queue.h"

template <typename T>
Queue<T>::Queue(){}
template <typename T>
Queue<T>::Queue(const Queue<T>& toCopy){
    Node<T>* temp = toCopy.top;
    while(temp){
        push(temp->getValue());
        temp = temp->getNext();
        size++;
    }
}
template <typename T>
Queue<T>::~Queue(){
    clear();
}
template <typename T>
T Queue<T>::getTopValue(){
    return top->getValue();
}
template <typename T>
T Queue<T>::pop(){
    T value = top->getValue();
    Node<T>* temp = top;
    top = top->getNext();
    delete temp;
    size--;
    return value;
}
template <typename T>
void Queue<T>::push(T value){
    if (empty()){
        size++;
        top = last = new Node<T>(value);
    } else {
        size++;
        Node<T>* temp = new Node<T>(value);
        last->setNext(temp);
        last = temp;
    }
}
template <typename T>
void Queue<T>::clear(){
    while(top){
        Node<T>* temp = top;
        top = top->getNext();
        delete temp;
        size--;
    }
}
template <typename T>
bool Queue<T>::empty(){
    return !size;
}
template <typename T>
int Queue<T>::getSize(){
    return size;
}


#endif // !QUEUE_CPP
