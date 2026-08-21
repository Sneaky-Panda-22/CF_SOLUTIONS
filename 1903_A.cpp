#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        if(k<1){
            cout << "NO\n";
        }
        else if(k==1){
            int flag = 1;
            for(int i=0;i<n-1;i++){
                if(arr[i]>arr[i+1]){
                    flag = 0;
                    break;
                }
            }
            if(flag) cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "YES\n";
    }
    return 0;
}
