#include<iostream>
using namespace std;
int main(){
  int arr[6]={0},res[6]={0},cunt=0;;
  for(int i=1;i<6;i++){
    cin>>arr[i];
  }
  for(int i=1;i<6;i++){
    
      int yf=arr[i]/3;
      int ys=arr[i]%3;
      cunt=cunt+ys;
      if(i==1){
        arr[5]=arr[5]+yf;
        arr[i+1]=arr[i+1]+yf;
        arr[i]=yf;
        continue;
      }
      if(i==5){
        arr[1]=arr[1]+yf;
        arr[i-1]=arr[i-1]+yf;
        arr[i]=yf;
        continue;
      }
      arr[i-1]=arr[i-1]+yf;
      arr[i+1]=arr[i+1]+yf;
      arr[i]=yf;
    }
    for(int i=1;i<6;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<cunt;
  }
