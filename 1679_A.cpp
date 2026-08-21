#include <iostream>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        
        if (n % 2 != 0 || n < 4) {
            cout << "-1\n";
        } else {
            long long min_buses = (n + 5) / 6; // Equivalent to ceil(n / 6.0)
            long long max_buses = n / 4;       // Equivalent to floor(n / 4.0)
            cout << min_buses << " " << max_buses << "\n";
        }
    }
    return 0;
}
