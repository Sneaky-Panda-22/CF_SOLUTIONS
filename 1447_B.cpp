#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, m; 
        cin >> n >> m;
        int curr_min = 1e9, neg_ct = 0;
        long long sum = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int val; 
                cin >> val;
                if (abs(val) < curr_min) {
                    curr_min = abs(val);
                }
                if (val < 0) {
                    neg_ct++;
                    sum += (-val);
                } else {
                    sum += val;
                }
            }
        }
        
        if (neg_ct % 2 == 0) {
            cout << sum << '\n';
        } else {
            cout << sum - 2 * curr_min << '\n';
        }
    }
    return 0;
}
