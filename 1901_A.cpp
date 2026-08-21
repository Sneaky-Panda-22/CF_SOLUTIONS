#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        int max_diff = arr[0]; 
        for(int i = 0; i < n - 1; i++){
            if(arr[i+1] - arr[i] > max_diff){
                max_diff = arr[i+1] - arr[i];
            }
        }
        int temp = 2 * (x - arr[n-1]);
        if(temp > max_diff){
            max_diff = temp;
        }
        cout << max_diff << '\n';
    }
    return 0;
}
