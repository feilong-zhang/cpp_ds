#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int n,m,k;
  cin>>n>>m>>k;
  int a[100][100]={0}
  ,b[100][100]={0}
  ,c[100][100]={0};
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>a[i][j];
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<k;j++){
      cin>>b[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<k;j++){
      for(int x=0;x<m;x++){
        c[i][j]=c[i][j]+a[i][x]*b[x][j];
      }
      cout<<c[i][j]<<" ";
    }
    cout<<endl;
  }
}
// void write(int i,int j,int* c,
//   int a[n][m],int b[m][k]){
  
//   for(int x=1;x<=m;x++){
//     *c=a[i][x]*b[x][j]+(*c);
//   }
// }