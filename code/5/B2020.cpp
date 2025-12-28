#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int arr[5]={0},eat=0;
  for(int&in:arr){
    cin>>in;
  }
  for(int i=0;i<5;i++){
    int yf=arr[i]/3; 
    eat=eat+arr[i]%3;
    
    arr[(i+4)%5]=arr[(i+4)%5]+yf;
    arr[(i+1)%5]=arr[(i+1)%5]+yf;
    arr[i]=arr[i]/3; 
  }
  for(int&in:arr){
    cout<<in<<" ";
  }
  cout<<endl;
  cout<<eat;
}