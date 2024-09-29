#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int arr[100];
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("The sorted array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}