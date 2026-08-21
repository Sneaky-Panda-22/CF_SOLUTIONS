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
        int count = 0;
        cin >> n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        for(int i=0;i<n-1;i++){
            if((arr[i]%2) == (arr[i+1]%2)){
                //adjacent elements have same parity
                count++;
            }
        }
        cout << count << '\n';
    }
    return 0;
}
