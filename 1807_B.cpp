#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        long long e=0,o=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x%2==0)e+=x;
            else o+=x;
        }
        if(o>=e)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
