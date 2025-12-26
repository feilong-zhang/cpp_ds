#include<iostream>
#include<cmath>
using namespace std;
int main(){
  double v=0.001,res;
  int x,n;
  cin>>x>>n;
  res=pow(1+v,n);
  cout.precision(4);
  cout<<fixed;
  cout<<x*res;
}