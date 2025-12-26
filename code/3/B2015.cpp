#include<iostream>
#include<format>
using namespace std;
int main(){
  double r1,r2;
  cin>>r1>>r2;
  cout<<format("{:.2f}",1/(1/r1+1/r2));
}