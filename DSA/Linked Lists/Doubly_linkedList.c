#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;
};

void addNode(struct node** head, int item) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->next = NULL;
    newnode->prev = NULL;
    if (*head == NULL) {
        *head = newnode;
    } else {
        struct node* current=*head;
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=newnode;
        newnode->prev=current;
    }
}
void display(struct node* head){
    struct node* current=head;
    while(current!=NULL){
        printf("%d\n",current->data);
        current=current->next;
    }
}

int main() {
    struct node* head = NULL;


    addNode(&head, 5);
    addNode(&head,6);
    display(head);    
    return 0;
}
