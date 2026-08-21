#include <iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n, w;
        cin >> n >> w;
 
        // Case 1: mower is wider than the fence
        if (w > n) {
            cout << n << "\n";
        }
        // Case 2: normal case
        else {
            long long full_blocks = n / w;
            long long remaining = n % w;
 
            long long removed = full_blocks * (w - 1) + remaining;
            cout << removed << "\n";
        }
    }
    return 0;
}
