#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n-1);
        for(int i=0;i<n-1;i++){
            cin >> arr[i];
        }
        for(int i=0;i<n-1;i++) arr[i] = -arr[i];
        long long sum =0;
        for(int i=0;i<n-1;i++) sum+=arr[i];
        cout << sum << '\n';
    }
    return 0;
}
