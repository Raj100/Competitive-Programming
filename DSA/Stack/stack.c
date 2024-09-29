#include <stdio.h>
int n=5;
int stack[5];
int top=-1;
void push(int item){
    if(top==n-1){
       printf("Obverflow"); 
    }
    else{
        top++;
        stack[top]=item;
    }
}
int pop(){
    if(top==-1){
        printf("underflow");
    }
    else{
        int temp=stack[top];
        top--;
        return temp;
    }
}
int main() {
    push(5);
    printf("%d",pop());
    return 0;
}