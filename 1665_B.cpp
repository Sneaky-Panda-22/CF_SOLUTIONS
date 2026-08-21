#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        map<long long,int>m;
        int max_freq=-1;
        for(int i=0;i<n;i++){
            long long x;cin>>x;
            m[x]++;
            max_freq=max(max_freq,m[x]);
        }
        int ct=0;
        //cout<<max_freq<<endl;
        if(max_freq==n){
            cout<<"0\n";
        }
        else{
            int ct=0;
            while(max_freq<=n){
                ct++;//clone
                if(max_freq*2>=n){
                    ct+=(n-max_freq);
                    break;
                }else{
                    ct+=max_freq;
                    max_freq*=2;
                }
            }
            cout<<ct<<endl;
        }
    }
    return 0;
}
