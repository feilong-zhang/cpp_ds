#include<iostream>
#include<cmath>//1L=1000cm^3
using namespace std;
#define pi 3.14
int main(){
  int h,r;
  cin>>h>>r;
  double ans=20*1000/(pi*pow(r,2)*h);
  cout<<ceil(ans);
}