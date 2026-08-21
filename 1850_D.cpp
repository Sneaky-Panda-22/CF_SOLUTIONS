#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        long long curr=1,maxL=1;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]<=k){
                curr++;
                maxL=max(maxL,curr);
            }else{
                curr=1;
            }
        }
        cout<<n-maxL<<'\n';
    }
    return 0;
}
