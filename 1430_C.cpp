#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    iota(a.begin(), a.end(), 1); 
    
    cout << 2 << "\n";
    
    for (int i = 0; i < n - 1; ++i) {
        int x = a.back();
        a.pop_back();
        int y = a.back();
        a.pop_back();
        
        cout << x << " " << y << "\n";
        
        int new_val = (x + y + 1) / 2;
        a.push_back(new_val);
    }
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
