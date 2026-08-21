#include <iostream>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count = 0;
        int max_so_far = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a >= max_so_far) {
                max_so_far = a;
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
