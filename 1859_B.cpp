#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
// long long MIN(long long a, long long b){
//     return a > b ? b : a;
// }
 
// long long MAX(long long a, long long b){
//     return a < b ? b : a;
// }
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;cin >> t;while (t--) {
        int n;cin>>n;vector<vector<long long>>a(n);
        for(int i=0;i<n;i++){
            int m;cin>>m;a[i].resize(m);
            for(int j=0;j<m;j++)cin>>a[i][j];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<a[i].size();j++){
                sort(a[i].begin(),a[i].end(),[](const long long& a, const long long& b){
                    return a < b;
                });
            }
        }
        long long sec_sum = 0, ans = a[0][0];
        long long sec_min = LONG_MAX;
        long long first_min = LONG_MAX;
        for(int i=0;i<n;i++){
            if(a[i][1] < sec_min){
                sec_min = a[i][1];
            }
            if(a[i][0] < first_min)first_min = a[i][0];
            sec_sum += a[i][1];
        }
        if(sec_min < first_min)cout << sec_sum << '\n';
        else{
            cout << sec_sum - sec_min + first_min << '\n';
        }
    }
    return 0;
}
