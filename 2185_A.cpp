#include <iostream>
#include <set>
#include <vector>
using namespace std;
 
int main() {
    set<long long> roots;
    roots.insert(1);
    
    // Generate all perfect powers
    for (int base = 2; base <= 31622; base++) {
        long long power = base * base;
        
        while (power <= 1000000000) {
            roots.insert(power);
            if (power > 1000000000 / base) break;
            power = power * base;
        }
    }
    
    // Convert to vector
    vector<long long> v(roots.begin(), roots.end());
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            if (i > 0) cout << " ";
            cout << v[i];
        }
        cout << endl;
    }
    
    return 0;
}
