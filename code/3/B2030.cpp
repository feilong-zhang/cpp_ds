#include<iostream>
#include<cmath>
using namespace std;
int main(){
  double xa,xb,ya,yb;
  cin>>xa>>ya>>xb>>yb;
  cout.precision(3);
  cout<<fixed;
  cout<<pow(pow(xb-xa,2)+pow(yb-ya,2),0.5);
}