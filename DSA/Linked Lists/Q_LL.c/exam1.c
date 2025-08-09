#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
void push(struct node** head, int item){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->next=NULL;
    if(*head==NULL){
        *head=newnode;
    }
    else{
        newnode->next=*head;
        *head=newnode;
    }
}
void pop(struct node** head){
    if(*head==NULL){
        printf("The stack is empty");
    }
    else{
        printf("%d\n",(*head)->data);
        *head=(*head)->next;
    }
}
void display(struct node* head){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main() {
struct node* head=NULL;
push(&head,5);
push(&head,6);
pop(&head);
pop(&head);
display(head);



    return 0;
}