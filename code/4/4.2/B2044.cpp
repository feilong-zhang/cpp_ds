#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int a,b,c,i=0;
  cin>>a>>b>>c;
  if(a<60) i++;
  if(b<60) i++;
  if(c<60) i++;
  if(i==1) cout<<i;
  else cout<<0;
}