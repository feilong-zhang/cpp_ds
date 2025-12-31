#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n,m,a[100][100]={0},at[100][100]={0};
  cin>>n>>m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>a[i][j];
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      //at[j][i]=a[i][j];
      cout<<a[j][i]<<" ";
    }cout<<endl;
  }
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<m;j++){
  //     at[j][i]=a[i][j];
  //     //cout<<a[j][i]<<" ";
  //   }//cout<<endl;
  // }
  // for(int i=0;i<m;i++){
  //   for(int j=0;j<n;j++){
  //     cout<<at[i][j]<<" ";
  //   }cout<<endl;
  // }
  
}