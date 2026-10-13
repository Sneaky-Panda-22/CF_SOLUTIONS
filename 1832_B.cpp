#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<long long> pre(n + 1, 0);
        for(int i = 0; i < n; i++){
            pre[i + 1] = pre[i] + a[i];
        }
        
        long long maxsum = 0;
        for(int i = 0; i <= k; i++){
            int leftdel = 2 * i;
            int rightdel = k - i;
            long long temp = pre[n - rightdel] - pre[leftdel];
            maxsum = max(maxsum, temp);
        }
        cout << maxsum << '\n';
    }
    return 0;
}
