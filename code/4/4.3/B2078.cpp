#include<iostream>
#include<cmath>
using namespace std;
int main(){
  long long m;
  int k,cunt=0;
  cin>>m>>k;
  for(;m>0;){
    if(m%10==3) cunt++;
    m=m/10;
  }
  if(cunt==k) cout<<"YES";
  else cout<<"NO";
}