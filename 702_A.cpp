#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)cin >> arr[i];
    int curr=1,maxl=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            curr++;
            maxl = max(maxl,curr);
        }else{
            curr=1;
        }
    }
    cout << maxl << '\n';
    return 0;
}
