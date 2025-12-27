#include<iostream>
#include<cmath>
using namespace std;
double time(double x,double y,int ren){
  return pow(x*x+y*y,0.5)/25+ren*1.5;
}
int main(){
  int n,ren;double sum=0;
  double x,y;
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>x>>y>>ren;
    sum=sum+time(x,y,ren);
  }
  cout.precision(0);
  cout<<fixed;
  //cout<<int(ceil(sum));
  cout<<ceil(sum);
}