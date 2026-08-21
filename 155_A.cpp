#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int Max(vector<int>&arr, int n){
    int maxel=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxel){
            maxel=arr[i];
        }
    }
    return maxel;
}
int Min(vector<int>&arr, int n){
    int minel=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<minel){
            minel=arr[i];
        }
    }
    return minel;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,count=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i]>Max(arr,i)){
            count++;
        }
        else if(arr[i]<Min(arr,i)){
            count++;
        }
    }
    cout<<count<<'\n';
    return 0;
}
