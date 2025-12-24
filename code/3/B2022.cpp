#include<iostream>
#include<format>
using namespace std;
int main(){
  double in;
  // scanf("%lf",&in);
  // printf("%.12f",in);
  cin>>in;
  cout<<format("{:.{}f}",in,12)<<endl;
}