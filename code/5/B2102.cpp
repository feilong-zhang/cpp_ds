#include<iostream>
#include<cmath>
using namespace std;
bool l(int arr[6][6],int h,int l){
  for(int i=1;i<=5;i++){
    if(arr[h][l]>arr[i][l]) return false;
  }
  return true;
}
int main(){
  int arr[6][6];
  for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
      cin>>arr[i][j];
    }
  }
  //int max;
  for(int i=1;i<=5;i++){
    int max=1;
    for(int j=1;j<=5;j++){
      if(arr[i][max]<arr[i][j]) max=j;
    }
    // if(l(arr,i,max)) {
    //   cout<<i<<" "<<max<<" "<<arr[i][max];return 0;
    // }
    for(int k=1;k<=5;k++){
      if(arr[i][max]>arr[k][max]) break;
      if(k==5) {cout<<i<<" "<<max<<" "<<arr[i][max];return 0;}
    }
  }
  cout<<"not found";
}