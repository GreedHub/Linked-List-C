#include <stdio.h>


struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};


void static addToEnd(struct Node* list, int data){
    struct Node *aux = (struct Node*)malloc(sizeof(struct Node));
    list->next = &aux;
    aux->prev = &list;
    aux->data = data;
    return;
}




int main(){
    struct Node* firstNode = (struct Node*)malloc(sizeof(struct Node)); 
    firstNode->data = 1;
    addToEnd(firstNode,2);
    struct Node* actualNode = firstNode;


    while(actualNode->next){
        printf("%d\n",actualNode->data);
        actualNode = actualNode->next;
    }

    return 0;
}