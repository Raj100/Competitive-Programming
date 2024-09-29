#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int T=0;T<t;T++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int max=0;
        int min=a[0];
        for(int i=0;i<n;i++){
            if(a[i]>max){
                max=a[i];
            }
            if(a[i]<min){
                min=a[i];
            }
        }
        cout<<(max-min)<<endl;
    }
    return 0;
}