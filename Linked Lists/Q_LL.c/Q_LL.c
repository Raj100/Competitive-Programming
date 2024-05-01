#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct node {
    int data;
    struct node* next;
};

void enqueue(struct node** head, struct node** tail, int item) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->next = NULL;
    if (*head == NULL) {
        *head = newnode;
        *tail=newnode;
    } else {
        (*tail)->next = newnode;
        *tail = newnode;
    }
}

void dequeue(struct node** head) {
    if (*head == NULL) {
        printf("Queue is empty\n");
        return;
    }
    printf("%d\n", (*head)->data);
    *head = (*head)->next;
}

int main() {
    struct node* head = NULL;
    struct node* tail = NULL;

    enqueue(&head, &tail, 5);
    dequeue(&head);
    
    return 0;
}