#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, s, x;
        cin >> n >> s >> x;
 
        int a[n];
        int sum = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
 
        int temp = s - sum;
 
        if (temp >= 0 && temp % x == 0)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}
