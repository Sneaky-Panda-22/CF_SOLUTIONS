#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int target = a[n-1];
        int size = 0;
        int i = n - 1;
        int op = 0;
        while (i >= 0) {
            while (i >= 0 && a[i] == target) {
                size++;
                i--;
            }
            if (i >= 0) {
                op++;
                i -= size;
                size *= 2;
            }
        }
        cout << op << '\n';
    }
    return 0;
}
