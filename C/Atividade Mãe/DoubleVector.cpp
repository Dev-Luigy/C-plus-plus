// Dupla Luigy Gabriel e Cauã Victor; Matriculas: 542161 e 538961;

#include "DoubleVector.h"
#include <stdio.h>

DoubleVector::DoubleVector(){
    m_capacity = 16;
    m_list = new int[16];
    int mid = (m_capacity - 1)/2;
    m_head = mid;              // 7
    m_tail = mid + 1;          // 8

}
DoubleVector::DoubleVector(int n){
    m_capacity = n;
    m_list = new int[n];
    int mid = (m_capacity - 1)/2;
    m_head = mid;
    m_tail = mid + 1;
}
DoubleVector::~DoubleVector(){
    //Normalmente o C++ implementa o destrutor sozinho.
}

int DoubleVector::size(){ return m_size; }
bool DoubleVector::empty(){ return !m_size; }

int DoubleVector::pop_back(){
    --m_tail, --m_size; // m_tail now point to last value of list.
    int value = m_list[m_tail];
    return value;
}
int DoubleVector::pop_front(){
    ++m_head, --m_size; // m_head now point to last value of list.
    int value = m_list[m_head];
    return value;
}
void DoubleVector::push_back(int value){
    if (m_tail == m_capacity){
        shift(1);
    }
    m_list[m_tail++] = value;
    m_size++;
}
void DoubleVector::push_front(int value){
    if (m_head < 0){
        shift(0);
    }
    m_list[m_head--] = value;
    m_size++;
}

int DoubleVector::at(int k){
    if (k < 0 || k > m_capacity) return -1; //if k < 0 || k > m_capacity.. also k isn't inner 0 to n - 1.
    return m_list[k + m_head + 1]; // first value of list if K == 0, because m_head are the pointer to free next, m_head + 1 equals to last added value in front;
}

void DoubleVector::shift(int type){
    if (type){ // type sims like list go to left.
        if (m_head < 1){ // i can't have 3 free spaces in left of vector.
            resize();
        } else {
            for (int i = m_head - 1; i < m_tail - 2; i++){ //seems like m_tail are in m_capacity position;
                m_list[i] = m_list[i + 2];
            }
            m_tail -= 2;
            m_head -= 2;
        }
    } else {   // this case list go to right
        if (m_tail >= m_capacity - 2){ // i can't have 3 free spaces in right of vector.
            resize();
        } else {
            for (int i = m_tail + 1; i > m_head + 2; i--){ //seems like m_head are in -1 position;
                m_list[i] = m_list[i - 2];
            }
            m_head += 2;
            m_tail += 2;
        }
    }
}
void DoubleVector::resize() {
    int* new_m_list = new int[m_capacity * 2];
    for (int i = 0; i < m_tail; i++) {
        new_m_list[i] = m_list[i];
    }

    delete[] m_list;
    m_list = new_m_list;
    m_capacity = 2 * m_capacity;
}

void DoubleVector::insert(int value, int k){
    for (int i = m_tail; i >= k + 1; i--){
        if (size() == m_capacity) 
            resize();
        m_list[i] = m_list[i - 1];
    }
    m_list[m_head + k + 1] = value;
    m_size++;
    m_tail++;
}
void DoubleVector::replaceAt(int value, int k){
    m_list[k + m_head + 1] = value;
}
void DoubleVector::removeAt(int k){
    int key = k + m_head + 1; // if k = 0, key will be m_head + 1 aka first list element.

    for (int i = key; i < m_tail; i++){
        m_list[i] = m_list[i + 1];
    }
    m_size--, m_tail--;
}

void DoubleVector::removeAll(int value){
    for (int i = m_head + 1; i < m_tail; i++){
        if (m_list[i] == value) {
            removeAt(i - m_head - 1);
            i--;
        }
    }
}

void DoubleVector::print(){
    for (int i = m_head + 1; i < m_tail; i++){
        printf ("%d ", m_list[i]);
    }
    printf ("\n");
}
void DoubleVector::printReverse(){
        for (int i = m_tail - 1; i > m_head; i--){
        printf ("%d ", m_list[i]);
    }
    printf ("\n");
}

void DoubleVector::concat(DoubleVector& lst){
    for (int i = lst.m_head + 1; i < lst.m_tail; i++){
        push_back(lst.m_list[i]);
    }
}

bool DoubleVector::equals(DoubleVector& lst){
    int y = m_head + 1;
    for (int i = lst.m_head + 1; i < lst.m_tail; i++) {
        if (lst.m_list[i] != m_list[y++]) return false;
    }
    return true;
}