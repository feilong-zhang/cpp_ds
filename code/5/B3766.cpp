#include <iostream>
#include <vector>

using namespace std;

int main() {
   int n,t,k;
   cin>>n>>t;
   int tarr[t]={0};
   vector<long long>xh;vector<long long>new_xh;
   for(int i=0,in;i<n;i++){
    cin>>in;
    xh.push_back(in);
   }
   for(int i=0;i<t;i++){
    cin>>tarr[i];
   }

   for(int i=0;i<t;i++){
    k=tarr[i];
    for(int i=1;i<=k;i++){
        int idx=i;
        while(idx<=n){
            new_xh.push_back(xh.at(idx-1));
            idx=idx+k;
        }
        // for(auto iter=xh.begin();iter!=xh.end();iter++){
        //     if(*iter==0) {
        //         xh.erase(iter);
        //         iter--;
        //     }
        // }
        
        // for(auto iter=xh.begin();iter!=xh.end();iter++){
        //     cout<<(long long)(*iter)<<" ";
        // }cout<<endl;
    }xh=new_xh;new_xh.clear();
    // cout<<' ';
    // for(auto iter=xh.begin();iter!=xh.end();iter++){
    //     cout<<(long long)(*iter)<<" ";
    // }cout<<endl;

   }
   
   for(auto iter=xh.begin();iter!=xh.end();iter++){
        cout<<(long long)(*iter)<<" ";
    }
    return 0;
}