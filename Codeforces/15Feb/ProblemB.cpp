#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int T=0;T<t;T++){
        int n;
        double b;
        cin>>n>>b;
        int ans;
        if((4*n-2)==b){
           ans=2*n; 
        }
        else if((4*n-3)==b){
            ans=2*n-1;
        }
        else{
            ans=ceil((b/2));
        }
        
        cout<<ans<<endl;
    }
    return 0;
}