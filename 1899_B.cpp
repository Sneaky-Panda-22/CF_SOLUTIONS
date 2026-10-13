#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> a(n);
        vector<ll> prefix(n+1, 0);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            prefix[i+1] = prefix[i] + a[i];
        }
        ll maxdiff = 0;
        vector<ll> divisors;
        for(int i = 1; i * i <= n; i++){
            if(n % i == 0){
                divisors.push_back(i);
                if(i * i != n){
                    divisors.push_back(n / i);
                }
            }
        }
        for(ll k : divisors){
            if(n % k != 0) continue; 
            ll mint = 1e18, maxt = -1e18;
            for(int i = k; i <= n; i += k){
                ll c = prefix[i] - prefix[i-k];
                mint = min(mint, c);
                maxt = max(maxt, c);
            }
            maxdiff = max(maxdiff, maxt - mint);
        }
        cout << maxdiff << '\n';
    }
    return 0;
}
