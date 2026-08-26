#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<cmath>
#include<cctype>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> res;
    set<int> seen;
    
    for (int i = n - 1; i >= 0; i--) {
        if (seen.find(a[i]) == seen.end()) {
            seen.insert(a[i]);
            res.push_back(a[i]);
        }
    }
    
    cout << res.size() << "\n";
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i] << (i > 0 ? " " : "");
    }
    cout << "\n";
    
    return 0;
}