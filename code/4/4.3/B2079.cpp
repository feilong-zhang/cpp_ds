#include<iostream>
#include<cmath>
using namespace std;
long long jc(long long n){
  if(n==1) return 1;
  return n*jc(n-1);
}

int main(){
  long long n;double e=1.0;
  cin>>n;
  for(int i=1;i<=n;i++){
    e=e+1.0/jc(i);
  }
  cout.precision(10);
  cout<<fixed;
  cout<<e;
}