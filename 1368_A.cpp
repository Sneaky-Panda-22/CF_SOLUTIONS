#include <iostream>
#include <utility>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        long long a, b, n;
        cin >> a >> b >> n;
        
        if (a < b) swap(a, b);
        
        int ct = 0;
        while (a <= n) {
            b += a;
            swap(a, b);
            ct++;
        }
        cout << ct << '\n';
    }
    return 0;
}
