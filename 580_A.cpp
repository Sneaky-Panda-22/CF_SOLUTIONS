#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    long long ct = 1, maxct = 1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] <= arr[i+1]) {
            ct++;
        } else {
            ct = 1;
        }
        maxct = max(maxct, ct);
    }
    
    cout << maxct << '\n';
    return 0;
}
