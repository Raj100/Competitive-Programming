#include <stdio.h> 
#include <stdlib.h>

struct stack
{
    int size ;
    int top ;
    int *arr ;
};

// void pop(int * ar,int top){}

void seek(int * ar, int top){
    if (top<0){
        printf("Stack is empty \n") ;
    }
    for (int i = top; i >= 0; i--)
    {
        printf("%d ---- %d \n",ar[i],i) ;
    }
    
}

void push(int * ar,int top){

    // top ++ ;
    int n;
    printf("Enter a number to push in stack : ") ;
    scanf("%d",&n) ;
    ar[top]=n ;
    printf("%d & %d \n",ar[top],top) ;
}

int main(){
    int k,m=1 ;
    struct stack s ;
    s.size=5;
    s.top=-1 ;
    s.arr = (int*) malloc(s.size * sizeof(int)) ;   // doubt : if i allot only 5 spaces than why i can able to use more than 5 spaces
    while(m==1){
    printf("Enter 1 for push \n") ;
    printf("Enter 2 for pop \n") ;
    printf("Enetr 3 for seek \n") ;
    printf("Enter 4 for Exit\n") ;
    printf("Enter number : ") ;
    scanf("%d",&k) ;

    
    int r=1 ;
    if(k==1){
    
    while(r==1){

        if(s.top < 5){
            s.top ++ ;
            push(s.arr,s.top) ;
        }
        else{
            printf("Stack is overflow \n") ;
            break ;
        }
        printf("Do you want to again push another number if yes press '1' if no press '0' : ") ;
        scanf("%d",&r) ; 
}
    }

    else if(k==2){
    while(r==1){

        if(s.top >= 0){
            printf("%d \n",s.arr[s.top]) ;
            s.top -- ;
            

        }
        else{
            printf("Stack is underflow \n") ;
            break ;
        }
        printf("Do you want to again pop another number if yes press '1' if no press '0' : ") ;
        scanf("%d",&r) ; 
}
    }

    else if(k==3){
    seek(s.arr,s.top) ;
    }

    else if(k==4){

        return 0 ;
    }
    } 
    
}