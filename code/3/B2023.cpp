#include<iostream>
#include<format>
using namespace std;
int main(){
  char inc;
  int ini;
  float inf;
  double ind;
cin>>inc>>ini>>inf>>ind;
//cout<<inc<<" "<<ini<<" "<<inf<<" "<<ind<<endl;
//cout<<format("{:} {:} {:.{}f} {:.{}f}",inc,ini,inf,6,ind,6)<<endl;
cout<<format("{0:} {1:} {2:.{3}f} {4:.6f}",inc,ini,inf,6,ind)<<endl;
}