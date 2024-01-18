#ifndef NODE_H
#define NODE_H


template <typename T>
class Node{
    public:
                Node<T>(T value);
                Node<T>(T value, Node<T>* next);
                Node<T>(T value, Node<T>* next, Node<T>* prev);
    T           getValue();
    Node<T>*    getNext();
    Node<T>*    getPrev();
    void        setValue(T newValue);
    void        setNext(Node<T>* newNext);
    void        setPrev(Node<T>* newPrev);

    private:
    T value;
    Node<T>* next {nullptr};
    Node<T>* prev {nullptr};
};

#include "node.cpp"

#endif // !NODE_H