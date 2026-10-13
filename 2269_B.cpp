#include<iostream>
#include<vector>
#include<map>
using namespace std;
typedef long long ll;
ll f(ll x){
    ll res = 0;
    while(x>0){
        int last = x%10;
        res+=last*last;
        x/=10;
    }
    return res;
}
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;vector<ll>a(n);
        map<int,ll>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            for(int j=0;j<10000;j++)a[i]=f(a[i]);
            mp[a[i]]++;
        }
        ll ans=0;
        for(auto p:mp){
            ll count = p.second;
            if(count>1)ans+=((count*(count-1))/2);
        }
        cout << ans << '\n';
    }
    return 0;
}