#include<iostream>
#include<algorithm>
using namespace std;
int main(){
        int n;cin>>n;int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        int ct=0;
        for(int i=0;i<n-1;i++){
            if(a[i]<a[n-1]){
                ct+=(a[n-1]-a[i]);
            }
        }
        cout<<ct<<'\n';
    
    return 0;
}
