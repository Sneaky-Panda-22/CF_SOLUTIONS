#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;string s,orig;
        cin>>n>>s>>orig;
        sort(s.begin(),s.end());
        sort(orig.begin(),orig.end());
        if(s==orig)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
