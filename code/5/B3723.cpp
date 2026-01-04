#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n;long long p[2]={0};
  cin>>n;
  vector<long long > coin(n);
  for(auto &in:coin) {
    cin>>in;
  }
  sort(coin.begin(),coin.end());
  // p[0]=p[0]+coin.front();
  // coin.erase(coin.begin());
  // p[1]=p[1]+coin.front();
  // coin.erase(coin.begin());
  for(int i=0;!coin.empty();i==1?i=0:i=1){
      for(int j=0;j<coin.size();j++){
        if(coin.at(j)>p[i]&&j==0){
          p[i]=p[i]+coin.front();
          coin.erase(coin.begin());
          break;
        }else if(coin.at(j)>p[i]){
          p[i]=coin.at(j-1)+p[i];
          coin.erase(coin.begin()+j-1);
          break;
        }else if(j==coin.size()-1){
          p[i]=coin.at(j)+p[i];
          coin.erase(coin.begin()+j);
          break;
        }
      }
    
  }
  cout<<p[0]<<" "<<p[1];
}