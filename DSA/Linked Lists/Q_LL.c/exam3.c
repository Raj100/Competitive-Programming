#include <stdio.h>
#include<stdlib.h>
int partition(int* A,int p,int r){
    int x=A[r];
    int q=r;
    for(int i=0;i<r;i++){
        if(A[i]>x && q>i){
            A[q]=A[i];
            q=i;
        }
        else if(A[i]<x&&i>q){
            A[q]=A[i];
            q=i;
        }
    }
    A[q]=x;
    return q;    
}
void Quicksort(int* A,int p,int r){
    if(p<=r){
        int q=partition(A,p,r);
        Quicksort(A,p,q-1);
        Quicksort(A,q+1,r);
    }
}
int main() {
    int A[]={100,50,60,7,80};

    Quicksort(A,0,4);
    for(int i=0;i<5;i++){
        printf("%d ",A[i]);
    }
    return 0;
}