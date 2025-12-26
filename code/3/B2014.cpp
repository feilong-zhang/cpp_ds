#include<iostream>
#include<format>
using namespace std;
#define pi 3.14159
int main(){
  double r;
  cin >>r;
  cout.precision(4);
  cout<<fixed;
  cout<<2*r<<" "<<2*pi*r<<" "<<pi*r*r;
  //cout<<format("{:.4f} {:.4f} {:.4f}",2*r,2*pi*r,pi*r*r);

}