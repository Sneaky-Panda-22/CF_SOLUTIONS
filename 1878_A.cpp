#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        int flag=0;//k is not present by default
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                flag = 1;//k is present in array
                break;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
