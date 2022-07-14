//linked list of three nodes
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
int main(){
    struct Node* Head = NULL;
    struct Node* Secound = NULL;
    struct Node* Third = NULL;
    //allocate nodes
    Head = (struct Node*)malloc(sizeof(struct Node*));
    Secound =(struct Node*)malloc(sizeof(struct Node*));
    Third = (struct Node*)malloc(sizeof(struct node*));
    //assining data o the nodes
    Head->data = 2;
    Head->next = Secound;
    Secound->data = 3;
    Secound->next = Third;
    Third->data = 4;
    Third->next = NULL;
    return 0;
}