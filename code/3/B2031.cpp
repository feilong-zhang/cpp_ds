#include<iostream>
using namespace std;
int main(){
  double x1,y1,x2,y2,x3,y3,s;
  cin>>x1>>y1>>x2>>y2>>x3>>y3;
  s=1/2.0*(x1*(y3-y2)+x2*(y1-y3)+x3*(y2-y1));
  cout.precision(2);
  cout<<fixed;
  cout<<abs(s);
}