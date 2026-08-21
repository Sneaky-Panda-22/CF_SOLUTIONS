#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int n;cin>>n;vector<int> a(n);
    for (int i = 0; i < n; i++)cin>>a[i];
    int flag = 0;
    for (int i=0;i<n;i++) {
        if (a[i] % 2 == 0) {
            a[i] /= 2;
        } else {
            if (flag == 0) {
                a[i] = floor((double)a[i] / 2.0);
                flag = 1;
            } else {
                a[i] = ceil((double)a[i] / 2.0);
                flag = 0;
            }
        }
    }
    
    for (auto &it : a) cout << it << '\n';
    return 0;
}
