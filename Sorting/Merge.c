#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void merge(int A[], int p,int q, int r){
    int n1=q-p+1;
    int n2=r-q;
    int L[n1+1];
    int R[n2+1];
    
    for(int i=0;i<n1;i++){
        L[i]=A[p+i];
    }
    for(int j=0;j<n2;j++){
        R[j]=A[q+j+1];
    }
    int i=0,j=0;
    L[n1]=INT_MAX;
    R[n2]=1000;
    for(int k=p;k<=r;k++){
        if(L[i]<=R[j]){
            A[k]=L[i];
            i+=1;
        }
        else{
            A[k]=R[j];
            j+=1;
        }
    }
}
void merge_sort(int A[], int p,int r){
    if(p<r){
        int q=(p+r)/2;
        merge_sort(A, p,q);
        merge_sort(A, q+1,r);
        merge(A,p,q,r);
    }
}
int main(){
    int A[5]={1,3,2,5,4};

    merge_sort(A,0,4);
    for(int i=0;i<5;i++)
    printf("%d ",A[i]);
    return 0;
}