#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        
        int maxVal = a[0];
        int idx = 0;
        for(int i=0; i<n; i++){
            if(maxVal < a[i]){
                maxVal = a[i];
                idx = i;
            }
        }
        
        int temp = a[0];
        a[0] = a[idx];
        a[idx] = temp;
        
        cout << a[0] * n << endl;
    }
    return 0;
}
