#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        long long sum = 0, ans = 0;
        long long maxi = 0;
        for(int i = 0; i < min(n, k); i++){
            sum += a[i];
            maxi = max(maxi, (long long)b[i]);
            ans = max(ans, sum + (k - (i + 1)) * maxi);
        }
        cout << ans << '\n';
    }
    return 0;
}
