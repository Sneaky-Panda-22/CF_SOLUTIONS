#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
    int n,total_sum=0,sum=0,j=0;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        total_sum +=arr[i];
    }
    sort(arr.rbegin(),arr.rend());
 
    while(sum <= total_sum/2){
        sum+=arr[j++];
    }
    cout << j << '\n';
    return 0;
}
