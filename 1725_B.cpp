#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long n,d;cin>>n>>d;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    
    sort(a.begin(),a.end());
    int r=n-1,l=0,ct=0,size=1;
    while(l<=r){
        if(a[r]*size<=d){
            l++;
            size++;
        }else{
            ct++;
            size=1;
            r--;
        }
    }
    cout<<ct<<endl;
    return 0;
}
