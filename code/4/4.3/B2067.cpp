#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int m,n,in,ans=0;
  cin>>m>>n;
  for(int i=1;i<=n;i++){
    cin>>in;
    if(in>m) {ans++;continue;}
    else {m=m-in;continue;}
    if(m<=0) ans++;
  }
  cout<<ans;
}
