#include<iostream>
#include<cmath>
using namespace std;
int main(){
  double sum=0,price[11]={0,28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
  for(int i=1;i<11;i++){
    int in;cin>>in;
    sum=price[i]*in+sum;
  }
  cout.precision(1);
  cout<<fixed;
  cout<<sum;
}