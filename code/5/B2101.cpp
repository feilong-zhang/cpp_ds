#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int m,n,sum=0;
  cin>>m>>n;
  int arr[m+1][n+1]={0};
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      cin>>arr[i][j];
      if(i==1||i==m) sum=sum+arr[i][j];
      else if(j==1||j==n) sum=sum+arr[i][j];
    }
  }
  cout<<sum;
}