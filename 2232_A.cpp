#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int min_calls = n;
    for (int i = 0; i < n; i++) {
        long long L = a[i];
        int c_L = 0;
        int c_R = 0;
 
        for (int j = 0; j < n; j++) {
            if (a[j] < L) c_L++;
            else if (a[j] > L) c_R++;
        }
 
        int current_calls = max(c_L, c_R);
        min_calls = min(min_calls, current_calls);
    }
 
    cout << min_calls << '\n';
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
