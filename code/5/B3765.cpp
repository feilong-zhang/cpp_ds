#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// void shift(vector &v){
  
// }
int main(){
  int N;
  cin>>N;
  
  vector<vector<int>> v(N,vector<int>(101,0));
  for(int i=0;i<N;i++){
    cin>>v[i][0];
    for(int j=1;j<=v[i][0];j++){
      //v.push_back();
      cin>>v[i][j];
    }
  }
  // for(int i=0;i<N;i++){//查看输入是否正确
  //   for(int j=0;j<=v[i][0];j++){
  //     //v.push_back();
  //     cout<<v[i][j]<<" ";
  //   }cout<<endl;
  // }
  vector<int> sum;
  for(int j=1;v[0][j]!=0;j++){
    sum.push_back(v[0][j]);
  }
  for(int i=0;i<v[0][0];i++){
    for(int j=1;j<=v[sum.at(i)-1][0];j++){
      sum.push_back(v[sum.at(i)-1][j]);
    }
  }
  sum.push_back(1);//无论怎样1号网页都访问了
  sort(sum.begin(),sum.end());
  int temp=sum.at(0);
  for(int i=1;i<sum.size();){//去重
    if(sum.at(i)==temp) {
      sum.erase(sum.begin()+i);continue;
    } else {
      temp=sum.at(i);i++;
    }
    
  }
  // for(auto &out:sum) cout<<out<<" ";//打印
  // cout<<endl;
  cout<<sum.size();
}