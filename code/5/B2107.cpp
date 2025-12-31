#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n,m,in[100][100]={0};
  cin>>n>>m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>in[i][j];
    }
  }
  for(int i=0;i<m;i++){
    for(int j=n-1;j>-1;j--){
      cout<<in[j][i]<<" ";
    }cout<<endl;
  }
}