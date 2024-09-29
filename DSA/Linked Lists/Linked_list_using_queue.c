#include <stdio.h>
#include <stdlib.h>
    struct node{
        int data;
        struct node* next; 
    };
struct node* head=NULL;
struct node* front=NULL;
struct node* rear=NULL;

struct node* enqueue(int a){
    if(head==NULL){
        head=(struct node*)malloc(sizeof(struct node));
        front=head;
        rear=head;
    }
    rear->next=(struct node*)malloc(sizeof(struct node));
    rear->data=a;
    rear=rear->next;
    rear->next=NULL;
    return rear;
}
int dequeue(int a){
    if(head==NULL){
        printf("Underflow");
         return -1;
    }
    else{
    int temp=head->data;
    head=head->next;
    return temp;
    }
}

int main() {
    head = enqueue(5);
    return 0;
}