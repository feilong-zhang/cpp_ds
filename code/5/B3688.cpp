#include<iostream>
#include<vector>
using namespace std;
// void shift(vector &v){
  
// }
int main(){
  int n;
  cin>>n;
  vector<int> v(n);
  // for(int i=0;i<n;i++){
  //   int in;cin>>in;
  //   v.push_back(in);
  // }
  for(auto& in:v) cin>>in;
  do{
    v.insert(v.begin(),v.back());
    v.pop_back();
    for(auto& in:v) cout<<in<<" ";
    cout<<"\n";
  }while(v.at(n-1)!=n);
  
}