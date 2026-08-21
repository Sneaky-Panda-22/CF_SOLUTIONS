#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    for (int i = 0; i <= n; i++) {
        for (int j = n - 1 - i; j >= 0; j--) {
            cout << "  ";
        }
        int tmp = 0;
        for (int j = n - i; j <= n; j++) {
            cout << tmp;
            if (i > 0 || tmp < i) cout << " ";
            tmp++;
        }
        if (i >= 1) {
            for (int j = i - 1; j >= 0; j--) {
                cout << j;
                if (j > 0) cout << " ";
            }
        }
        cout << '\n';
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "  ";
        }
        for (int j = 0; j < n - i; j++) {
            cout << j;
            if (n - i - 1 > 0 || j < n - i - 1) cout << " ";
        }
        if (i != n - 1) {
            for (int j = n - 2 - i; j >= 0; j--) {
                cout << j;
                if (j > 0) cout << " ";
            }
        }
        cout << '\n';
    }
 
    return 0;
}
