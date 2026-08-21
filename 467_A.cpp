#include<iostream>
using namespace std;
 
int main(){
  int n;
  cin >> n;
  int arr[2*n];
  for(int i=0;i<2*n;i++){
    cin>>arr[i];
  }
  int count =0;
  for(int i=1;i<=2*n;i+=2){
    if(arr[i]-arr[i-1]>=2){count++;}
  }
  cout<<count;
  return 0;
}
