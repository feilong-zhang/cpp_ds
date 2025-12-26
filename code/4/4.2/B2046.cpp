#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int x;
  cin>>x;
  double b=x/3.0+50.0;
  double w=x/1.2;
  if(b>w) cout<<"Walk";
  else if(b==w) cout<<"All";
  else cout<<"Bike";
}