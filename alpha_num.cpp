#include<iostream>
using namespace std;
  cout<< "Enter value of a:";
  char a;
  cin>> a;
  if(a<=58&&a>=47){
    cout<<"This is a number"<< endl;
  }
  if(a>=97&&a<=120){
    cout<<"This is a small alphabet"<< endl;
  }
  if(a>=65&&a<=90){
    cout<<"This is a capital alphabet"<< endl;
  }
   return 0;
}