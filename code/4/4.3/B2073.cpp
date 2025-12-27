#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int a,b,n;
  cin>>a>>b>>n;
  //double a1b=a*pow(10,n)/b;
  for(int i=1;i<=n;i++){
    a=a%b;
    a=a*10;
  }
  
  cout<<a/b;
}