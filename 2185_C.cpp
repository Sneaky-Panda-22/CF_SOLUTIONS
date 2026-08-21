#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        
        int result = 0;
        
        for (int i = 0; i < n; i++) {
            int x = -a[i];
            int mex = 0;
            
            for (int j = 0; j < n; j++) {
                if (a[j] + x == mex) {
                    mex++;
                }
            }
            
            result = max(result, mex);
        }
        
        cout << result << endl;
    }
    
    return 0;
}
