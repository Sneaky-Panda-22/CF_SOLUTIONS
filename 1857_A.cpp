#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int hsh[2];
        for(int i=0;i<2;i++) hsh[i] = 0;
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) {
            cin >> arr[i];
            if(arr[i]%2==0) hsh[0]++;
            else hsh[1]++;
        }
        if(hsh[1]%2!=0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
