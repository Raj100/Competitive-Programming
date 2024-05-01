#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void swap(int *a,int *b){
    int temp=*b;
    *b=*a;
    *a=temp;
}
void insert_sort(int* A,int n){
    int i=0;
    for(i=0;i<n;i++){
            int min=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[min]){
                min=j;
            }
        }
        swap(&A[i],&A[min]);
    }
}
int main(){
    int A[5]={1,3,5,4,2};

   insert_sort(A,5);
    for(int i=0;i<5;i++)
    printf("%d ",A[i]);
    return 0;
}