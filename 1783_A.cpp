#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        sort(arr.begin(),arr.end());
        int minElement = arr[0];
        int maxElement = arr[n-1];
        if(maxElement == minElement) {
            cout << "NO\n";
        }else{
            cout << "YES\n" << maxElement << " ";
            for(int i=0;i<n-1;i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
