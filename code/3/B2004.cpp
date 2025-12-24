#include <iostream>
#include <format>
using namespace std;
int main(){
  int a,b,c;
  cin >> a >> b >> c ;
  // cout.right;
  // cout.width(8);
  // cout.right;
  // cout.width(8);
  // cout.right;
  // cout.width(8);
  // cout << a << " " <<  b <<
  //  " " << c << endl;
  cout << format("{0:>8} {1:>8} {2:>8}",a,b,c) << endl;

}