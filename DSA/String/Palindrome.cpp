#include <iostream>
#include<cmath>
using namespace std;

bool checkPalindrome(char str[]) {
    int n=strlen(str);
    if(n==1){
        return true;
    }
    char rev[n];
    for(int i=0;i<n;i++){
        rev[i]=str[n-1-i];
    }
    rev[n] = '\0';
    if(strcmp(str,rev)==0){
        return true;
    }
    return false;
}

int main(){
    // For charater array
    //Method 2 str[i]==str[n-1-i]
    char str[4]={'a','b','b','a'};
    checkPalindrome(str)?cout<<"yes":cout<<"NO";
    int n=sizeof(str)/sizeof(str[0]);
    return 0;
}