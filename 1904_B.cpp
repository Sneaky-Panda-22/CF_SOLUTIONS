#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<pair<long long, long long>> a(n);
        for (int i = 0; i < n; i++) {
            long long x; 
            cin >> x;
            a[i] = {x, i};
        }
        
        sort(a.begin(), a.end());
        
        vector<long long> prefix(n);
        prefix[0] = a[0].first;
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + a[i].first;
        }
        
        vector<long long> ans(n);
        for (int i = 0; i < n; i++) {
            int j = i;
            int tmp = i;
            while (j < n) {
                pair<long long, long long> temp = {prefix[j] + 1, INT_MIN};
                long long idx = lower_bound(a.begin(), a.end(), temp) - a.begin();
                idx--;
                if (idx == j) break;
                tmp += idx - j;
                j = idx;
            }
            ans[a[i].second] = tmp;
        }
        
        for (auto &it : ans) cout << it << " ";
        cout << '\n';
    }
}
