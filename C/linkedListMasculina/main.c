    #include <stdio.h>
    #include <stdlib.h>

    typedef struct node Node;

    struct node{
        int value;
        Node * next;
    };

    void pushBack (int value, Node ** m_head){
        Node * dest = NULL;
        if (!(*m_head)){
            *m_head = (Node *) malloc (sizeof(Node));
            (*m_head)->value = value;
            (*m_head)->next = NULL;
            return;
        }
        Node * iterator = *m_head;
        while(iterator->next)
            iterator = iterator->next;

        iterator->next = (Node *) malloc (sizeof(Node));
        iterator->next->value = value;
        iterator->next->next = NULL;
    }

    int popBack(Node ** m_head){
        Node * iterator = *m_head;
        while(iterator->next)
            iterator = iterator->next;
        int val = iterator->value;
        free(iterator);
        return val;
    }

    void print(Node *m_head) {
        Node *iterator = m_head;
        while (iterator) {
            printf("%d ", iterator->value);
            iterator = iterator->next; // Atualiza o iterador para o próximo nó
        }
        printf("\n");
    }

    int main () {
        Node * m_head_pares = NULL;
        Node * m_head_impares = NULL;
        int n, k;
        scanf ("%d", &n);
        for (int i = 0; i < n; i++){
            scanf ("%d", &k);
            k&1 ? pushBack(k, &m_head_impares) : pushBack(k, &m_head_pares); 
        }
        print (m_head_impares);
        print (m_head_pares);
    }