#include <stdio.h>
#include<stdlib.h>
int main() {
    struct node{
        int a;
        struct node* next;
    };
    struct node head;
    struct node* current;
    printf("Enter n(Only for Testing purpose but program will traverse through all nodes to count the number of nodes):\n");
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
    current=&head;
    int count=0;
    while(current!=NULL){
        current=current->next;
        count+=1;
    }
    count-=1;
    printf("cont=%d\n",count);
    int average_position=count/2;
    //to insert a node at average position we will go till average_position-1
    average_position-=1;
    printf("avg posn=%d\n",average_position);
    current=&head;
    for(int i=0;i<average_position-1;i++){
        current=current->next;
    }
    printf("avg-1=%d\n",current->a);

    
    //node to be inserted
    
    struct node avgnode;
    avgnode.a=99;
    avgnode.next=current->next;
    current->next=&avgnode;
    
    //now TRAVERSAL TO Print all the node to see the result
    current=&head;
    for(int i=0;i<count+1;i++){
        printf("%d\n",current->a);
        current=current->next;
    }
    //PeaceOut
    
    return 0;
}