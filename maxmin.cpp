#include<iostream>
using namespace std;
 int main() {
   int a[3]={1,2,3};
   int min=a[0];
   int max=a[0];
   for(int i=0;i<sizeof(a)/sizeof(int);i++){
     if (min>a[i]) {
       min=a[i];
          }
          if(max<a[i]){
            max=a[i];
          }
   }
   cout<<max<<min;
  return 0;
}
