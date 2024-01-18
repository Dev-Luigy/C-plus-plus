template<typename T>
class Node {
    public:
                Node<T>(T value, Node<T>* next);
    T           getValue();
    Node<T>*    getNext ();
    void        setValue(T newValue);
    void        setNext (Node<T>* newNext);

    private:
    T value;
    Node<T>* next {nullptr};
};