#include <stdio.h>
#include <stdlib.h>
int main() {
    struct node{
        int a;
        struct node* p; 
    };
    struct node head;
    head.a=5;
    head.p = (struct node*)malloc(sizeof(struct node));
    head.p->a = 9;
    head.p->p = (struct node*)malloc(sizeof(struct node));
    head.p->p->a = 8;
    head.p->p->p = (struct node*)malloc(sizeof(struct node));
    head.p->p->p->a = 9;
    head.p->p->p->p = (struct node*)malloc(sizeof(struct node));
    head.p->p->p->p->a = 9;
    head.p->p->p->p->p = (struct node*)malloc(sizeof(struct node));
    head.p->p->p->p->p->a = 9;
    head.p->p->p->p->p->p = (struct node*)malloc(sizeof(struct node));
    head.p->p->p->p->p->p->a = 5;
    head.p->p->p->p->p->p->p = (struct node*)malloc(sizeof(struct node));
    head.p->p->p->p->p->p->p->a = 6;
    head.p->p->p->p->p->p->p->p = (struct node*)malloc(sizeof(struct node));
    head.p->p->p->p->p->p->p->p->a = 9;
    head.p->p->p->p->p->p->p->p->p = (struct node*)malloc(sizeof(struct node));    
    head.p->p->p->p->p->p->p->p->p->a = 9;
    head.p->p->p->p->p->p->p->p->p->p = NULL;
    return 0;
}