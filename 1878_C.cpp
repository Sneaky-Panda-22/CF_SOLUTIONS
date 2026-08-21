#include<iostream>
#include<vector>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        long long n,k,x;
        cin >> n >> k >> x;
        long long top_sum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
 
        long long bot_sum = (k*(k+1))/2;
        if(x>=bot_sum && x <= top_sum) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
