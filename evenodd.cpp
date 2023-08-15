#include<iostream>
using namespace std;
bool evenodd(int n){
if(n%2==0){
    return true;
}
return false;
}
int main(){
    int n;
    cin>>n;
    if(evenodd(n)){
      cout<<"Even";
    }
    else{
      cout<<"odd";
    }
    return 0;
}
