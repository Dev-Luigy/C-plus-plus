#include <iostream>
#include <stdlib.h>
#include "ForwardList.h"

ForwardList::ForwardList(){
    this->m_head = nullptr;
    this->m_size = 0;
}

ForwardList::ForwardList(ForwardList& lst){
    Node* aux = lst.m_head;

    auto alocNode = [this, aux]() {
        m_head = new Node(aux->getValue(), aux->getNext());
    };

    if (aux == nullptr) {
        m_head = nullptr;
    } else {
        if(empty())
            alocNode();
        Node* it = m_head;
        aux = aux->getNext();
        while (aux != nullptr) {
            push_back(aux->getValue());
            aux = aux->getNext();
        }
    }
}

ForwardList::~ForwardList(){ }

int ForwardList::size() const {
    return this->m_size;
}


bool ForwardList::empty() const{
    return !this->m_size;
}

void ForwardList::clear(){
   Node* current = m_head;
    while (current->getNext()) {
        Node* nextNode = current;
        current = current->getNext();
        free(nextNode);
    }
    free(current);
}

Node* ForwardList::getNode(int index){
    if ((int) index >= m_size || empty()) {
        return nullptr;
    }
    
    Node* current = m_head;
    for (unsigned int i = 0; i < index; ++i) {
        current = current->getNext();
    }
    
    return current;
}


int ForwardList::at(int index )const{
     if ((int)index >= m_size || empty()) {
        return -1;
    }

    Node* current = m_head;
    for (unsigned int i = 0; i < index; ++i) {
        current = current->getNext();
    }

    return current->getValue();
}

void ForwardList::push_back(int value){
    if (empty()){
        m_head = new Node(value, nullptr);
        m_size++;
        return;
    }

    Node* temp = getNode(m_size++ - 1);
    if (!temp) return;
    temp->setNext(new Node(value, nullptr));
}

int ForwardList::pop_back(){
    if (empty()) return 0;

    int value;
    Node* current = m_head;
    Node* previous = nullptr;

    if (!current->getNext()) {
        value = current->getValue();
        free(current);
        m_head = nullptr;
        m_size = 0;
        return value;
    }

    while (current->getNext()) {
        previous = current;
        current = current->getNext();
    }

    value = current->getValue();
    free( current);
    previous->setNext(nullptr);
    m_size--;
    return value;
}


void ForwardList::insert(int value, int index){
   if (!index) {
        push_front(value);
        return;
    }else if( (int) index == size() - 1){
        push_back(value);
        return;
    }else{
        Node* current = getNode(index -1);
        current->setNext(new Node(value, current->getNext()));
        ++m_size;
    }
}



void ForwardList::push_front(int value) {
    Node* newNode = new Node(value, m_head);
    m_head = newNode;
    ++m_size;
}

int ForwardList::pop_front() {
    if (empty()) {
        return 0;
    }
    
    Node* frontNode = m_head;
    int value = frontNode->getValue();
    m_head = m_head->getNext();
    free(frontNode);
    --m_size;
    
    return value;
}


void ForwardList::replaceAt(int value,int index){
    Node* node = getNode(index);
    node->setValue(value);
}

void ForwardList::removeAt(int index){
   if (!index) {
        pop_front();
        return;
    }
    
    Node* node = getNode(index - 1);
    Node* toDelete = node->getNext();
    node->setNext(toDelete->getNext());
    free( toDelete);
    --m_size;
}

void ForwardList::removeAll(int value){
    if (empty()) return;

    if (m_head->getValue() == value) {
        pop_front();
    }

    Node* cuurent = m_head->getNext();
    int i = 1;
    
    while (cuurent->getNext()) {
        if (cuurent->getValue() == value) {
            removeAt(i--);
            cuurent = getNode(i);
            continue;
        }
        
        cuurent = cuurent->getNext();
        i++;
    }


    if (cuurent->getValue() == value) {
        pop_back();
    }
}

bool ForwardList::equals(ForwardList& lst){
    Node* headLst = lst.m_head;
    Node* current = m_head;

    while (current && headLst) {
        if(current ->getValue() != headLst->getValue()){
            return false;
        }
        current = current->getNext();
        headLst = headLst->getNext();
    }

    if (current != nullptr || headLst != nullptr) {
        return false;
    }

    return true;    
}


void ForwardList::concat(ForwardList& lst) {
    if (empty()) {
        Node* headLst = lst.m_head;
        while (headLst) {
            push_back(headLst->getValue());
            headLst = headLst->getNext();
        }
    } else {
        Node* current = m_head;
        while (current->getNext()) {
            current = current->getNext();
        }

        Node* headLst = lst.m_head;
        while (headLst) {
            push_back(headLst->getValue());
            headLst = headLst->getNext();
        }
    }
}