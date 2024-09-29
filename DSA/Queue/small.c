#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int n=5;
int q[5];
int rear=0;
int front=0;
void enqueue(int a){
    rear=(rear+1)%n;
    if(rear==front){
        printf("Overflow");
        if(rear==0){
            rear=n-1;
        }
        else{
            rear--;
        }
    }else{
        q[rear]=a;
    }
}
void dequeue(){
    if(rear==front){
        printf("underflow");
    }
    else{
        q[front]=0;
        front=(front+1)%n;
        printf("Queue removed=%d\n",q[front]);
    }
}
int main(){
    // int A[5]={1,3,5,4,2};
    // insert_sort(A,5);
    enqueue(1);
        enqueue(1);
    enqueue(1);
    enqueue(1);
    // enqueue(1);
    dequeue();
    dequeue();
        enqueue(1);



    for(int i=0;i<5;i++)
    printf("%d ",q[i]);
    return 0;
}