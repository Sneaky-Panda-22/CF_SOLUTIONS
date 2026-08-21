#include<iostream>
#include<vector>
using namespace std;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        if(arr[i] < 0) arr[i] = -arr[i];
    }
    int min = INT_MAX;
    for(int i=0;i<n;i++) {
        if(arr[i] < min) min = arr[i];
    }
    cout << min << '\n';
    return 0;
}
