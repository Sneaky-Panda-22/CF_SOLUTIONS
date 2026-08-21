#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<int> count(3, 0);
    for (int i = 0; i < n; i++) {
        int w;
        cin >> w;
        count[w]++; 
    }
    
    int max_operations = 0;
    
    max_operations += count[0];
    
    int pairs = min(count[1], count[2]);
    max_operations += pairs;
    count[1] -= pairs;
    count[2] -= pairs;
    
    max_operations += (count[1] / 3);
    max_operations += (count[2] / 3);
    
    cout << max_operations << '\n';
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
