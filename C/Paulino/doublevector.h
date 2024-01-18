#ifndef DOUBLEVECTOR_H
#define DOUBLEVECTOR_H

class DoubleVector {
    private:
        int* m_list {nullptr}; // ponteiro para a lista
        int  m_size {0};       // numero de elementos na lista
        int  m_capacity {0};   // capacidade total da lista
        int  head;
        int  tail;

    public:

        DoubleVector();

        DoubleVector(int n); 

        ~DoubleVector();

        int capacity() const; 

        int size() const; 

        int mhead();

        int mtail();

        bool empty() const; 

        int at(int k) const;

        void leftShift();

        void rightShift();

        void resize();

        void push_back(int value); 

        int pop_back(); 

        void remove(int k);

        void insert(int value, int k);

        void removeAll(int value);

        void push_front(int value);

        int pop_front(); 

        void print();

        void printReverse();

        void concat(DoubleVector& lst);

        bool equals(DoubleVector& lst);

        //Substitui o valor no índice k pelo elemento value (somente se 0 <= k <= m_size -1).
        void replaceAt(int value, int k);

        void PrintAllList();

    };
#endif