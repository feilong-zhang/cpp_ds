#include<iostream>
#include<cmath>
using namespace std;
void write(int i,int j,
  int* c,int a[n][m],int b[m][k]){
  
  for(int x=1;x<=m;x++){
    *c=a[i][x]*b[x][j]+(*c);
  }
}
int main(){
  int n,m,k;
  cin>>n>>m>>k;

}