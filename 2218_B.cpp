#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int arr[7];
        for(int i=0; i<7; i++){
            cin>>arr[i];
        }
        sort(arr, arr+7);
        for(int i=0; i<6; i++){
            arr[i] = arr[i]*(-1);
        }
        int sum = 0;
        for(int i=0; i<7; i++) sum+=arr[i];
        cout << sum << '\n';
    }
    return 0;
}
