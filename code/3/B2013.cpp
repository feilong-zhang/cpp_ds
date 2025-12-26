#include<iostream>
#include<format>
using namespace std;
int main(){
  double c,f;
  cin>>f;
  cout<<format("{:.5f}",(f-32)/9*5);
}