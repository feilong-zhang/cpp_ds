#include<iostream>
#include<format>

using namespace std;
int main(){
  float in;
  cin>>in;
  // scanf("%f",&in);
  // printf("%.3f",in);
  cout<<format("{:.{}f}",in,3)<<endl;
  cout<<format("{:.3f}",in)<<endl;
}