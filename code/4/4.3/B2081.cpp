#include<iostream>
#include<cmath>
using namespace std;
bool pdq(int x){
  if(x%7==0) return true;
  for(;x!=0;){
    if(x%10==7) return true;
    x=x/10;
  }
  return false;
}
int main(){
  int in;
  cin>>in;
  int sum=0;
  for(int i=1;i<=in;i++){
    if(!pdq(i)) sum=sum+i*i;
  }
  cout<<sum;
}