#ifndef NODE_H
#define NODE_H

class Node {
private:
    int value {0};  // valor 
    Node* next;  // ponteiro para o proximo no 
public:

    Node(int val, Node *nextPtr);
    Node();
    int getValue();
    Node* getNext();
    void setValue(int newValue);
    void setNext(Node* newNext);
};

#endif
