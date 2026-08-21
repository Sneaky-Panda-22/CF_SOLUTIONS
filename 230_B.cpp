#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<long long> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        
        long long r = round(sqrt(arr[i]));
        
        if (r * r == arr[i] && isPrime(r)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
