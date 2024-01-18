#include <stdio.h>
#include <stdlib.h>
typedef struct node Node;
    
    struct node{
        int value;
        Node* next;
    };

void push_back(node** head,int value){
    if (!(*head)){
        *head = (Node*)malloc(sizeof(Node));
        (*head)->next = nullptr;
        (*head)->value = value;
        return;
    }
    node* temp2 = *head;
    while (temp2->next){
        temp2 = temp2->next;
    }
    node* temp = (Node*) malloc (sizeof(Node));
    temp->value = value;
    temp2->next = temp;
}
int pop_back(node* head){
    node* temp = head;
    while (temp->next){
        temp = temp->next;
    }
    int retorno = temp->value;
    free(temp);
    return retorno;
}


int main(){
    node* head = nullptr;
    int n = 0;
    scanf("%d",&n);
    for (int i = 0;i<n;i++){
        int val = 0;
        scanf("%d",&val);
        push_back(&head,val);
    }
    node * temp = head;
    for (int i = 0;i<n;i++){
        printf("%d",temp->value);
        temp = temp->next;
    }
}