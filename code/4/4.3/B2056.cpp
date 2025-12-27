#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n,in,sum=0;
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>in;
    sum=sum+in;
  }
  cout<<sum<<" ";
  cout.precision(5);
  cout<<fixed;
  cout<<sum/(double)n;
}