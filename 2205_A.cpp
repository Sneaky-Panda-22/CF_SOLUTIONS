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
        vector<int>arr(n+1);
        for(int i=1;i<=n;i++) cin >> arr[i];
        if(n==1) cout << arr[1] << '\n';
        else{
            int max_idx = 1;
            for(int i=1;i<=n;i++){
                if(arr[i] > arr[max_idx]){
                    max_idx = i;
                }
            }
            int temp = arr[max_idx];
            arr[max_idx] = arr[1];
            arr[1] = temp;
            for(int i=1;i<=n;i++){
                cout << arr[i] << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}
