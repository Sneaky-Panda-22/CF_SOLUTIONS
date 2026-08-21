#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            long long n, x;
            cin >> n >> x;
            vector<long long> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
 
            int ans = 0;
            long long current_min = a[0] - x;
            long long current_max = a[0] + x;
 
            for (int i = 1; i < n; i++) {
                long long item_min = a[i] - x;
                long long item_max = a[i] + x;
 
                current_min = max(current_min, item_min);
                current_max = min(current_max, item_max);
 
                if (current_min > current_max) {
                    ans++;
                    current_min = item_min;
                    current_max = item_max;
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}
