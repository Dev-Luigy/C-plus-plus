#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"

template <typename T>
class Queue{
    public:
                Queue();
                Queue(const Queue<T>& toCopy);
                ~Queue();
    T           getTopValue();
    T           pop();
    void        push(T value);
    void        clear();
    bool        empty();
    int         getSize();

    private:
    Node<T>* last {nullptr};
    Node<T>* top  {nullptr};
    int      size {0};
};
#include "queue.cpp"

#endif // !QUEUE_H