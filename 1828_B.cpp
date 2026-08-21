#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <numeric>
using namespace std;
 
void solve() {
    int n; cin >> n;vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    int g = 0;
    for (int i = 1; i <= n; i++) g = gcd(g, abs(a[i] - i));
    
    cout << g << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;while (t--) {
        solve();
    }
    return 0;
}
