#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
bool ok(ll x,ll c,ll d){
    if(d>0&&x/d<c)return 0;
    return x>=c*d;

}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n;ll x;cin>>n>>x;
        vector<ll> a(n);
        for(int i=0;i<n;++i)cin>>a[i];
        sort(a.begin(),a.end());
        ll ans=a[0];
        for(int i=0;i<n;++i){
            ll next=(i==n-1)?2e9+7:a[i+1];
            ll c=i+1,d=next-a[i];
            if(ok(x,c,d)){x-=c*d;ans=next;}
            else{ans+=x/c;x=0;break;}
        }
        cout<<ans<<"\n";
    }
    return 0;
}