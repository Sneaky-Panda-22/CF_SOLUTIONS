#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long n, k, b, s;
    cin >> n >> k >> b >> s;
 
    long long min_sum = k * b;
    long long max_sum = (k * b) + n * (k - 1);
 
    if (s < min_sum || s > max_sum) {
        cout << "-1\n";
        return;
    }
 
    vector<long long> arr(n, 0);
    arr[0] = k * b;
 
    long long remaining = s - arr[0];
 
    for (int i = 0; i < n; i++) {
        long long take = min(remaining, k - 1);
        arr[i] += take;
        remaining -= take;
    }
 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
