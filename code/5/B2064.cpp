#include<iostream>
#include<cmath>
using namespace std;
int fb(int n){
  if(n==1) return 1;
  if(n==2) return 1;
  return fb(n-1)+fb(n-2);
}
int main(){
  int n,in;cin>>n;int arr[n]={0};
  for(int i=0;i<n;i++) {
    cin>>in;arr[i]=in;
    //cout<<fb(in)<<endl;
  }
  // for(int i=0;i<n;i++) {
  //   //cin>>in;arr[i]=in;
  //   cout<<fb(arr[i])<<endl;
  // }
  int fb[31]={0,1};
  for(int i=2;i<31;i++){
    fb[i]=fb[i-1]+fb[i-2];
  }
  for(int i=0;i<n;i++) {
    cout<<fb[arr[i]]<<endl;
    //cout<<fb(in)<<endl;
  }
}