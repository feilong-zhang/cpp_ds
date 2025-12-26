#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int x,sum=0;
  char y;
  cin>>x>>y;
  if(x<=1000) {
    if(y=='y') cout<<(8+5);
    else cout<<8;
  }
  else{
    if(y=='y')
      cout<<(ceil((x-1000.0)/500)*4+5+8);
    else
      cout<<(ceil((x-1000.0)/500)*4+8);
  }
}