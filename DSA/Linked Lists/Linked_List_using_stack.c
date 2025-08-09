#include <stdio.h>
#include <stdlib.h>
    struct node{
        int data;
        struct node* next; 
    };
struct node* head=NULL;
struct node* front=NULL;
struct node* rear=NULL;
void display();
void enqueue(int b){
    if(head==NULL){
        head=(struct node*)malloc(sizeof(struct node));
        front=head;
        rear=head;
        rear->data=b;
        rear->next=NULL;
    }
    else{
    rear->next=(struct node*)malloc(sizeof(struct node));
    rear=rear->next;
    rear->data=b;
    rear->next=NULL;
    }

}
int dequeue(){
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
void display(){
    struct node* current=head;
    while(current!=NULL){
        printf("%d",current->data);
        current=current->next;
    }
}
int main() {
    enqueue(5);
    enqueue(6);
    display();
    return 0;
}