#include<iostream>
#include<cmath>
using namespace std;
int main(){
  //cout<<300-300/19*19<<" "<<262-262/19*19<<" "<<205-205/19*19<<" ";
  int x=2,a,b,c;
  cin>>a>>b>>c;
  for(;;x++){
    if(a%x==b%x&&b%x==c%x) break;
  }
  cout<<x;
}