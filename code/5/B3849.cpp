#include<iostream>
#include<vector>
using namespace std;

int main(){
  // char Rarr[26]={'A','B','C','D','E',
  //   'F','G','H','I','J',
  //   'H','L','M','N','O',
  //   'P','Q','R','S','T',
  //   'U','V','W','X','Y','Z'
  // };
  int N,R;
  cin>>N>>R;
  vector<int> v;
  do{
    v.push_back(N%R);
    N=N/R;
  }while(N!=0);
  // for(auto iter=v.rbegin();iter!=v.rend();iter++){
  //   if(*iter<10) cout<<*iter;
  //   else cout<<char('A'+(*iter)-10);
  // }
  for(;!v.empty();){
    if(v.back()<10) cout<<v.back();
    else cout<<char('A'+v.back()-10);
    v.pop_back();
  }
}