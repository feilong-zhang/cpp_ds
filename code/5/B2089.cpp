#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n]={0};
  for(int i=n-1;i>-1;i--){
    int in;cin>>in;
    arr[i]=in;
  }
  for(int out:arr){
    cout<<out<<" ";
  }
}