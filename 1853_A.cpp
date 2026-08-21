#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        int flag = 1; // already sorted array
        for(int i=0;i<n-1;i++){
            if(arr[i] > arr[i+1]){
                flag = 0;//unsorted
                break;
            }
        }
        if(!flag){
            cout << "0\n";
        }else{
            //find minimum +ve difference
            int diff = INT_MAX;
            for(int i=0;i<n-1;i++){
                int temp = abs(arr[i+1]-arr[i]);
                diff = min(diff,temp);
            }
            cout << (diff)/2 + 1 << '\n';
        }
    }
    return 0;
}
