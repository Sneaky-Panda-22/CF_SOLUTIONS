#include<iostream>
#include<vector>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int>arr(n),idx;
        for(int i=0;i<n;i++) cin >> arr[i];
        int ct = 0;
        for(int i=n-1;i>=0;i--){
            int curr_val = arr[i];
            if(ct%2==1){
                curr_val = -curr_val;
            }
            if(curr_val > 0){
                ct++;
                idx.push_back(i+1);
            }
        }
        cout << ct << '\n';
        for(int val:idx){
            cout << val << " ";
        }
        cout << '\n';
    }
    return 0;
}
