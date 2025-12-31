#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int in[100][100]={0},n,m,out[100][100]={0};
  cin>>n>>m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>in[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(i!=0&&j!=0&&i!=n-1&&j!=m-1){
        //cout<<in[i][j]<<" ";
        out[i][j]=0.5+(
          in[i][j]+
          in[i-1][j]+
          in[i][j-1]+
          in[i+1][j]+
          in[i][j+1]
        )/5.0;
      }
      else out[i][j]=in[i][j]; 
    }//cout<<endl;
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<out[i][j]<<" ";
    }
    cout<<endl;
  }
  // cout.precision(0);
  // cout<<fixed;
  // cout<<(int)10.1<<" "<<(int)10.6;
}