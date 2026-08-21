#include <iostream>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            long long n;
            cin >> n;
            
            int r = n % 12;
            long long a = -1;
            
            if (r <= 9) {
                a = r;
            } else if (r == 10) {
                a = 22;
            } else if (r == 11) {
                a = 11;
            }
            
            if (n >= a) {
                cout << a << " " << (n - a) << "\n";
            } else {
                cout << -1 << "\n";
            }
        }
    }
    
    return 0;
}
