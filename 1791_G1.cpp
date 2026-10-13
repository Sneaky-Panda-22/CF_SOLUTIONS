#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t; cin >> t;while(t--){
        int n; long long c;cin >> n >> c;
        vector<long long> a(n), cost(n);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++){
            cost[i] = (i + 1) + a[i];
        }
        sort(cost.begin(), cost.end());
        int count = 0;
        for(int i=0; i<n; i++){
            if(c >= cost[i]){
                c -= cost[i];
                count++;
            } else {
                break;
            }
        }
        cout << count << '\n';
    }
    return 0;
}
