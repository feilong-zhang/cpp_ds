#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int x,i=1;
  cin>>x;
  if(x%3==0) {
    cout<<"3 ";i=0;}
  if(x%5==0) {
    cout<<"5 ";i=0;}
  if(x%7==0) {
    cout<<"7";i=0;}
  if(i==1) cout<<"n";
}