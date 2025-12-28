#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n;
  cin>>n;
  double e=1.0;
  long long earr[16]={1,1};
  for(int i=1;i<=n;i++) {
    earr[i]=i*earr[i-1];
    e=e+1.0/earr[i];
  }
  cout.precision(10);
  cout<<fixed;
  cout<<e;
}