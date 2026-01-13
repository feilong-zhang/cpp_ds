#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n,m,r;
  cin>>n>>m>>r;
  vector<int> fs_ds(n);
  vector<int> fs_hs(n);
  vector<vector<int>> f(m+1);//f[i][j],i是花色，为下标。点数为值，j说明同一花色不同值
  vector<int> f_ds(n);
  vector<int> f_hs(n);
  vector<int> ord(n);
  for(int i=0;i<n;i++)cin>>fs_hs[i];
  for(int i=0;i<n;i++)cin>>fs_ds[i];
  //fs_hs[0]和 fs_ds[0] 拼在一起就是扶苏的第一张牌
  for(int i=0;i<n;i++)cin>>f_hs[i];
  for(int i=0;i<n;i++)cin>>f_ds[i];

  for(int i=0;i<n;i++){
    f[f_hs[i]].push_back(f_ds[i]);
  }
  for(int i=0;i<=m;i++){
    if(!f[i].empty())
    sort(f[i].begin(),f[i].end());
  }
  for(int i=0;i<n;i++){
    cin>>ord[i];
    ord[i]--;//减1变成下标
  }
  
  for(int i=0;i<n;i++){
    int idx=ord[i];
    for(auto iter=f[fs_hs[idx]].begin();iter!=f[fs_hs[idx]].end()&&i<n;iter++){
      if(*iter>fs_ds[idx]) {
        //cout<<(*iter);
        f[fs_hs[idx]].erase(iter);
        break;
      }
    }
  }
  //int i=0,ans=0,find=0;//find==0没找到，find==1找到了
  // for(auto iter=f[fs_hs[ord[i]]].begin();iter!=f[fs_hs[ord[i]]].end()&&i<n;iter++){
  //   if(*iter>fs_ds[ord[i]]) {
  //     //cout<<(*iter);
  //     find=1;
  //     f[fs_hs[ord[i]]].erase(iter);
      
  //   }
  //   if(find) {
  //     i++;find=0;
  //     iter=f[fs_hs[ord[i]]].begin();
  //     continue;
  //   }else if(iter==f[fs_hs[ord[i]]].end()) {
  //     iter=f[fs_hs[ord[i]]].begin();
  //     i++;
  //     continue;
  //   }

  // }
  int ans=0;

  for(int i=0;i<=m;i++){
    if(!f[i].empty())
    ans=ans+f[i].size();
  }
  
  cout<<ans;
}