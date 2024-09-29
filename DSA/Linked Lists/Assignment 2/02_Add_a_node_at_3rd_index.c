#include <stdio.h>
#include <stdlib.h>
int main() {
    // Write C code here
    struct node{
        int a;
        struct node* p;
    };
    struct node head;
    head.p = (struct node*)malloc(sizeof(struct node));
    head.a=1;
    head.p->a=2;
    head.p->p= (struct node* )malloc( sizeof(struct node ));
    head.p->p->a=4;
    head.p->p->p=NULL;
    struct node* next;
    next=head.p;
    for(int i=0;i<0;i++){
        next=next->p;
    }
    int temp=next->a;
    struct node* temp1=next->p;
    struct node node3;
    node3.a=3;
    node3.p=temp1;
    next->p=&(node3);

    printf("%d\n",head.a);
    printf("%d\n",head.p->a);
    printf("%d\n",head.p->p->a);
    printf("%d\n",head.p->p->p->a);



    return 0;
}