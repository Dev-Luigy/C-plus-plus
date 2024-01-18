class Node{
    private:
    int value {0};
    Node* next {nullptr};
    Node* prev {nullptr};

    public:
    Node(int value, Node* next, Node* prev) : value(value), next(next), prev(prev) {}
    int getValue() { return value; }
    void setValue(int value) { this->value = value; }
    Node* getNext() { return next; }
    Node* getPrev() { return prev; }
    void setNext(Node* next) { this->next = next; }
    void setPrev(Node* prev) { this->prev = prev; }
};