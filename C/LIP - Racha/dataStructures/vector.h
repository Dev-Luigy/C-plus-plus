#ifndef VECTOR_H
#define VECTOR_H

#include "node.h"

template<typename T>
class Vector{
    public:
    Vector();
    Vector(const Vector<T>& src);
    ~Vector();

    // Bool & Informatives.
    int         getSize();
    bool        empty();
    T           at(int index);
    void        print();

    // Add Values.
    void        pushFront(T value);
    void        pushBack(T value);
    T           popFront();
    T           popBack();
    void        insertAt(int index, T value);

    // Data Manipulation;
    void        replaceAt(int index, T value);
    void        removeAt(int index);
    void        removeAll(T value);
    Node<T>*    nodeAt(int index);
    
    // Large data manipulation.
    void        clear();

    private:
    Node<T>* first      {nullptr};
    Node<T>* last       {nullptr};
    int      m_size     {0};
};

#include "vector.cpp"

#endif // !VECTOR_H