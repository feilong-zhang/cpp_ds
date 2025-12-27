#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n,max=0,in;
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>in;
    if(max<in) max=in;
  }
  cout<<max;
}