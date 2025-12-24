#include<iostream>
#include<format>
using namespace std;
int main(){
  char in;
  cin >> in ;
  // cout << "  " << in << endl;
  // cout << " " << in<<in<<in<<endl;
  // cout << in << in<<in<<in<<in<<endl;
  cout <<format("  {0:}\n {0:}{0:}{0:}\n{0:}{0:}{0:}{0:}{0:}",in) << endl;
}