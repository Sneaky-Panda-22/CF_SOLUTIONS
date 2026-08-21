#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        bool made_swap = true;
        while (made_swap) {
            made_swap = false; 
            for(int i = 1; i < n - 1; i++){
                if(arr[i-1] < arr[i] && arr[i] > arr[i+1]){
                    // Swap arr[i] and arr[i+1]
                    int temp = arr[i+1];
                    arr[i+1] = arr[i];
                    arr[i] = temp;
                    made_swap = true; 
                }
            }
        }
        int finalSorted = 1;
        for(int i = 0; i < n - 1; i++){
            if(arr[i] > arr[i+1]){
                finalSorted = 0;
                break;
            }
        }
        
        if(finalSorted) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
