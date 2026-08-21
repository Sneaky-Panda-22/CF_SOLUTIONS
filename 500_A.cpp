#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, t;
    cin >> n >> t;
 
    vector<int> arr(n);
    for(int i = 1; i < n; i++) {
        cin >> arr[i];
    }
    int idx = 1;
    while(idx < t) {
        idx += arr[idx];
    }
    if(idx == t) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}
