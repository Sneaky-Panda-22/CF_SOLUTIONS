#include <iostream>
using  namespace std;

int prefXor(int n) {
    int rem = n % 4;
    if (rem == 0) return n;
    if (rem == 1) return 1;
    if (rem == 2) return n + 1;
    return 0;
}

void solve() {
    int a, b;
    cin >> a >> b;
    int x = prefXor(a - 1);
    if (x == b) {
        cout << a << "\n";
    } else if ((x ^ b) != a) {
        cout << a + 1 << "\n";
    } else {
        cout << a + 2 << "\n";
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
