#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct node {
    int data;
    struct node* next;
};

void push(struct node** head, int item) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->next = NULL;
    if (*head == NULL) {
        *head = newnode;
    } else {
        newnode->next=*head;
        *head=newnode;
    }
}

void pop(struct node** head) {
    if (*head == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("%d\n", (*head)->data);
    *head = (*head)->next;
}

int main() {
    struct node* head = NULL;

    push(&head, 5);
    push(&head,6);

    pop(&head);
    pop(&head);

    
    return 0;
}
