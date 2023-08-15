#include<iostream>
using namespace std;
int ncr(int n,int r){
  int ans=1,d=1;
  for(int i=r+1;i<=n;i++){
    ans=ans*i;
  }
  for(int i=1;i<=n-r;i++){
    d*=i;
  }
  ans=ans/d;
  return ans;
}
int main(){
  int n,r;
  cin>>n>>r;
  cout<<ncr(n,r);
  return 0;
}
