#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        long long n, p;
        cin >> n >> p;
 
        vector<pair<long long, long long>> v(n);
        for (int i = 0; i < n; i++) cin >> v[i].first;
        for (int i = 0; i < n; i++) cin >> v[i].second;
        sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
            return a.second < b.second;
        });
        long long cost = p; 
        long long known_villager = 1;
        int idx = 0;
 
        while (known_villager < n) {
            if (v[idx].second >= p) {
                cost += (n - known_villager) * p;
                break;
            }
            long long remaining = n - known_villager;
            long long take = min(v[idx].first, remaining);
 
            cost += (take * v[idx].second);
            known_villager += take;
            idx++;
        }
 
        cout << cost << '\n';
    }
    return 0;
}
