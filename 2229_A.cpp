#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
bool func(vector<int>vec, int x){
    for(int i=0;i<vec.size();i++){
        if(vec[i]!=x) return true;
    }
    return false;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        sort(arr.begin(),arr.end());
        int x = (arr[0]+arr[n-1])/2;
        int count = 0;
        while(func(arr, x)){
            count++;
            for(int i=0;i<n;i++){
                if(arr[i] > x) arr[i]--;
                else if(arr[i] < x) arr[i]++;
                else continue;
            }
        }
        cout << count << '\n';
    }
    return 0;
}
