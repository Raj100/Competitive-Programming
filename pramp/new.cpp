// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
// #incluse<a

using namespace std;
int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    int n;
    cin>>n;
    string s;
    while(n!=0){
        s+=n%2;
        n/=2;
    }
    reverse(s.begin(),s.end());
    cout<<s;

    return 0;
}