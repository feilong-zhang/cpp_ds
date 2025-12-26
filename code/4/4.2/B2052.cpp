#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int a,b;char ch;
  cin>>a>>b>>ch;
  if(ch=='/'&&b==0) {
    cout<<"Divided by zero!";return 0;
  }
  if(ch!='*'&&ch!='/'&&ch!='+'&&ch!='-'){
    cout<<"Invalid operator!";return 0;
  }
  if(ch=='+') cout<<a+b;
  else if(ch=='-') cout<<a-b;
  else if(ch=='*') cout<<(a*b);
  else cout<<(a/b);

} 