#include "node.cpp"
#include <cstddef>
#include <iostream>

class Lista {
    private:
    int mSize {0};
    Node* sentinel;
    Node* endSentinel;

    public:
    Lista(){
        sentinel = nullptr;
        endSentinel = nullptr;
    };
    ~Lista(){};
    void add(int value){
        Node* newNode = new Node(value, nullptr, nullptr);
        if(empty()){
            sentinel = endSentinel = newNode;
        } else {
            newNode->setNext(sentinel);
            newNode->setPrev(endSentinel);
            endSentinel->setNext(newNode);
            endSentinel = newNode;
        }
        mSize++;
    }

    int removeNode(int k){
        if (k > mSize - 1 || k < 0) return -1;
        if (mSize == 1){
            mSize--;
            delete (sentinel);
            sentinel = nullptr;
            endSentinel = nullptr;
        }
        Node* iterator = sentinel;
        int i = 0;
        while (i++ < k - 1){ // get the behind node;
            iterator = iterator->getNext();
        }
        Node* temp = iterator->getNext();
        int value = temp->getValue();
        delete (temp);
        return value;
    }

    int at (int k) {
        Node* iterator = sentinel;
        int i = 0;
        while (i++ < k)
            iterator = iterator->getNext();
        
        return iterator->getValue();
    }

    bool empty(){ return !mSize; }
    int getSize() {return mSize; }
};