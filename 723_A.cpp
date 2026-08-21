#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int arr[26], final[26];
 
int main() {
    vector<int>arr(3);
    for(int i=0;i<3;i++) cin >> arr[i];
    sort(arr.begin(),arr.end());
    cout << arr[2] - arr[0] << endl;
    return 0;
}
