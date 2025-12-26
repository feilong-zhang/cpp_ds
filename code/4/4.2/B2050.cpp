#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  if(a+b<=c||a+c<=b||c+b<=a) cout<<0;
  else cout<<1;
}