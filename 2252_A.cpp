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
            int n;
            cin >> n;
            
            long long S = 0;
            int k = 0;
            int X = 0;
            vector<int> hash(1005, 0);
            
            for (int i = 0; i < n; ++i) {
                int a;
                cin >> a;
                S += a;
                hash[a]++;
                if (hash[a] > k) {
                    k = hash[a];
                    X = a;
                }
            }
            
            if (k <= (n + 1) / 2) {
                cout << S << "\n";
            } else {
                long long other_sum = S - (1LL * k * X);
                long long max_allowed = n - k + 2;
                cout << other_sum + (max_allowed * X) << "\n";
            }
        }
    }
    return 0;
}
