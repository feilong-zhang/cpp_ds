#include<iostream>
#include<cmath>
using namespace std;
void oclight(int* arr,int k,int n){
  for(int i=k;i<=n;i=i+k){
    if(arr[i]) arr[i]=0;
    else arr[i]=1;
  }
  return;
}

int main(){
  int n;
  cin>>n;
  int arr[n+1];
  fill(arr,arr+n+1,1);
  for(int i=1;i<=n;i++)
  oclight(arr,i,n);
  for(int i=1;i<=n;i++){
    if(arr[i]==0)
    cout<<i<<" ";
  }
}