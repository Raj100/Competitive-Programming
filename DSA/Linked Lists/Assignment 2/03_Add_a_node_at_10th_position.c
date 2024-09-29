#include <stdio.h>
#include <stdlib.h>
int main() {
    // Write C code here
    struct node{
        int a;
        struct node* next;
    };
    struct node head;
    struct node* current;
    current=&head;
    for(int i=1;i<=10;i++){
        current->a=i;
        current->next = (struct node*)malloc(sizeof(struct node));
        current=current->next;
    }
    current=&head;
    for(int i=0;i<10;i++){
        printf("%d\n",current->a);
        current=current->next;
    }
    //Now I want to insert 11 at the 10th position so i will go till 9th index
    current=&head;
    for(int i=1;i<9;i++){
        current=current->next;
    }
    printf("%d\n",current->a);
    struct node node10;
    node10.a=11;
    node10.next=current->next;
    current->next=&node10;
    printf("%d\n",current->a);
    printf("%d\n",current->next->a);

    current=&head;
    for(int i=0;i<11;i++){
        printf("%d\n",current->a);
        current=current->next;
    }
    
    return 0;
}