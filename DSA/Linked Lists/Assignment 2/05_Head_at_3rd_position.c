#include<stdio.h>
#include<stdlib.h>
int main() {
    struct node{
        int a;
        struct node* next;
    };
    struct node head;
    struct node* current;
    printf("Enter n:\n");
    int n;
    scanf("%d",&n);
    current=&head;
    for(int i=1;i<=n;i++){
        current->a=i;
        current->next = ( struct node* )malloc(sizeof( struct node ));
        current=current->next;
    }
    current=NULL;
    //All Nodes declared with values 1 to n now main program starts
    struct node* end;
    end=&head;
    int count=0;
    while(end!=NULL){
        end=end->next;
        count+=1;
    }
    end=&head;
    //to make the 3rd element the head of the list and also sent other traversed element at the back
    
    current=&head;
    for(int i=0;i<2;i++){
        current=current->next;
    }
    head=*current;

    //now TRAVERSAL TO Print all the node to see the result
    current=&head;
    for(int i=0;i<count+1;i++){
        printf("%d\n",current->a);
        current=current->next;
    }
    //PeaceOut
    
    return 0;
}