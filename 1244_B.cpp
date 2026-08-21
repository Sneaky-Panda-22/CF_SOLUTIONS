#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int max_rooms = n; 
 
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            int idx = i + 1; 
            int max_dist = max(idx, n - idx + 1);
 
            max_rooms = max(max_rooms, 2 * max_dist);
        }
    }
 
    cout << max_rooms << "\n";
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
