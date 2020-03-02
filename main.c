#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* createNode( int data){
    struct Node *aux = (struct Node*)malloc(sizeof(struct Node));
    aux->data = data;
    return aux;
}

int main(){
    struct Node* firstNode = (struct Node*)malloc(sizeof(struct Node)); 
    struct Node* tempNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* actualNode = firstNode;
    firstNode->data = 0;

    for(int i = 1 ; i<=5; i++){
        tempNode = createNode(i);
        actualNode->next = tempNode;
        actualNode = actualNode->next;
    }

    actualNode = firstNode;
    do{
        printf("%d\n",actualNode->data);
        actualNode = actualNode->next;
    }while(actualNode->next);

    return 0;
}