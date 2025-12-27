#include<iostream>
#include<cmath>
using namespace std;
int main(){
  long long a,b,c=1;
  cin>>a>>b;
  for(int i=1;i<=b;i++){
    c=c*a;
    c=c%1000;
  }//cout<<c<<endl;
  int bi=0,s=0,g=0;
  bi=c/100%10;
  s=c/10%10;
  g=c%10;
  cout<<bi<<s<<g;
}