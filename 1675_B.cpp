#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long ct = 0;
        bool possible = true;
        for (int i = n - 2; i >= 0; i--) {
            while (a[i] >= a[i + 1] && a[i] > 0) {
                a[i] /= 2;
                ct++;
            }
            if (a[i] >= a[i + 1]) {
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << ct << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}
