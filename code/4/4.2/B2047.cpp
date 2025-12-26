#include<iostream>
#include<cmath>
using namespace std;
int main(){
  double x;
  cin>>x;
  cout.precision(3);
  cout<<fixed;
  if(x>=0&&x<5) cout<<(-x+2.5);
  else if(x>=5&&x<10) cout<<(2-1.5*(x-3)*(x-3));
  else cout<<(x/2-1.5);
}