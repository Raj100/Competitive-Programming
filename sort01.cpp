// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C code here
    int arr[]={1,0,1,1,1,0,0,1,0};
    int n=9;
      int i=0,j=n-1;
   while(i<j){
      if(arr[i]==0){
         cout<<"0";
         i++;
      }
      if(arr[j]==1){
         j--;
      }
      if(arr[i]==1&&arr[j]==0){
         swap(arr[i],arr[j]);
         cout<<"0";

         i++;
         j--;
      }
   }
   while(i<n){
      cout<<"1";
      i++;
   }
    return 0;
}
