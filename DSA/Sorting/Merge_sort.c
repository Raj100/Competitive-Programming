#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

// struct node{
//     int data;
//     struct node* next;
// };

void merge(struct node* A,int p,int q,int r){
    //merge two sorted arrays
    int n1=q-p+1;
    int n2=r-q;
    struct node* L=(struct node *)malloc(sizeof(struct node)*(n1+1));
    struct node* R=(struct node *)malloc(sizeof(struct node)*(n2+1));
    for(int i=0;i<n1;i++){
        L[i]=A[p+i];
    }
    for(int i=0;i<n2;i++){
        R[i]=A[q+i+1];
    }
    L[n1].data=INT_MAX;
    R[n2].data=INT_MAX;
    int i=0,j=0;
    for(int k=p;k<=r;k++){
        if(L[i]<=R[j]){
            A[k]=L[i];
            i++;
        }
        else{
            A[k]=R[j];
            j++;
        }
    }

}
void merge_sort(struct node* A,int p,int r){
    if(p<r){
        int q=(p+r)/2;
        merge_sort(A,p,q);
        merge_sort(A,q+1,r);
        merge(A,p,q,r);
    }
}
int main(){
    int A[5]={1,3,2,5,4};
    merge_sort(A,0,4);

    for(int i=0;i<5;i++){
        printf("%d ",A[i]);
    }
    return 0;
}