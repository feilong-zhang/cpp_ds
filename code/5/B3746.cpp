#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int MinIdx(vector<long long> arrn){//返回数组最小元素下标，1-n
  int minidx=arrn.size()-1;
  for(int i=arrn.size()-1;i>0;i--){
    if(arrn[i]<=arrn[minidx])
      minidx=i;
  }
  return minidx;
}

int main(){
  int n,m;
  cin>>n>>m;
  // if(n>=m){
  //   for(int i=1;i<=m;i++) cout<<i<<endl;
  //   for(int j=m;j<n;j++) cout<<0<<endl;
  // }else{
    vector<vector<int>> vn(n+1);
    vector<long long> arrn(n+1,0);

    for(int i=1;i<=m;i++){
      int in;
      cin>>in;
      // if(i<=n){
      //   arrn[i]=in;
      //   vn[i].push_back(i);
      // }else{
        int minidx=MinIdx(arrn);
        arrn[minidx]=arrn[minidx]+in;
        vn[minidx].push_back(i);
      //}
    }

    // for(int i=n+1;i<=m;i++){
    //   int minidx=MinIdx(arrn,n+1);
    //   arrn[minidx]=arrn[minidx]+arrm[i];
    //   vn[minidx].push_back(i);
    // }

    for(int i=1;i<=n;i++){
      if(vn[i].empty())
        cout<<0<<endl;
      else{
        for(auto &out:vn[i]){
          cout<<out<<" ";
        }cout<<endl;
        // for (int k = 0; k < (int)vn[i].size(); k++) {
        //   if (k) cout << ' ';
        //     cout << vn[i][k];
        // }cout<<endl;
      }
        
    }
  //}
  

}