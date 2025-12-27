#include<iostream>
#include<cmath>
using namespace std;
// void jg(long long in){
//   if(in==1) return;
//   if(in%2){
//     cout<<in<<"*3+1=";
//     in=in*3+1;
//     cout<<in<<endl;
//     return jg(in);
//   }
//   else{
//     cout<<in<<"/2=";
//     in=in/2;
//     cout<<in<<endl;
//     return jg(in);
//   }
// }
int main(){
  long long in;
  cin>>in;
  //jg(in);
  for(;in!=1;){
    if(in%2){
      cout<<in<<"*3+1=";
      in=in*3+1;
      cout<<in<<endl;
      continue;
    } else {
      cout<<in<<"/2=";
      in=in/2;
      cout<<in<<endl;
      continue;
    }
  }
  cout<<"End";
}