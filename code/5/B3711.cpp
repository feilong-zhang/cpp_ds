#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
bool yes(vector<char> bak){
  if(bak.size()<2) return (bak.back()-'0')%4==0;
  int sum=0;
  sum=sum+bak.back()-'0';
  bak.pop_back();
  sum=sum+(bak.back()-'0')*10;
  return sum%4==0;
}
int main(){
  int T;
  cin>>T;
  for(int k=0;k<T;k++){
    char s[25];
    cin >> s;
    int n = (int)strlen(s);
    //cout<<"n="<<n<<endl;
    vector<char> v;
    for(int i=0;i<n;i++){
      v.push_back(s[i]);
    }
    int t=0;
    if(yes(v)){
      cout<<"Yes"<<endl;t=1;continue;
    }
    for(int k=1;k<n&&t==0;k++){
      for(int j=0;j<2;j++){
        vector<char> bak=v;
        // for(int i=0;i<bak.size();i++){
        //   cout<<bak.at(i);
        // }cout<<endl;
        bak.erase(bak.begin()+n-k-j,bak.end()-j);//cout<<"erase:"<<endl;
        // for(int i=0;i<bak.size();i++){
        //   cout<<bak.at(i);
        // }cout<<endl;
          if(yes(bak)){
            cout<<"Yes"<<endl;t=1;break;
          }
      }
    }
        
    if(t==0) cout<<"No"<<endl;
  }
  

}