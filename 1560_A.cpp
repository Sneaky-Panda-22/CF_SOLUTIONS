#include<iostream>
using namespace std;
const int N = 1e7+10;
int arr[N];
int main(){
    int idx=0;
    for(int i=1;i<=N;i++){
        if(i%3==0 || i%10==3)continue;
        else arr[idx++]=i;
    }
    int t;cin>>t;while(t--){
        int k;cin>>k;cout<<arr[k-1]<<'\n';
    }
    return 0;
}
