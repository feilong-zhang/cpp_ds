#include<iostream>
#include<cmath>
using namespace std;
bool ispreme(int x){
  for(int i=2;i*i<=x;i++){
    if(x%i==0) return false;
  }
  return true;
}
int main(){
  int n,a=0,i=2;
  cin>>n;
  for(;a<n;i++){
    if(ispreme(i)) a++;
  }
  cout<<(--i);
}