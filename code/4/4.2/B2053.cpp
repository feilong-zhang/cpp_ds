#include<iostream>
#include<cmath>
using namespace std;
int main(){
  double a,b,c,x1,x2;
  cin>>a>>b>>c;
  double d=b*b-4*a*c;
  if(d<0){
    cout<<"No answer!";return 0;
  }
  x1=(-b-sqrt(d))/(2*a);
  x2=(-b+sqrt(d))/(2*a);
  cout.precision(5);
  cout<<fixed;
  if(x1==x2) {
    cout<<"x1=x2="<<x1;
  }
  else if(x1<x2) cout<<"x1="<<x1<<";x2="<<x2;
  else cout<<"x1="<<x2<<";x2="<<x1;

}