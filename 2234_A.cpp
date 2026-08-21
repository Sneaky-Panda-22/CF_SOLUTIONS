#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.rbegin(),arr.rend());
        int flag=1;
        for(int i=2;i<n;i++){
            if(arr[i]!=arr[i-2]%arr[i-1]){
                flag=0;
                break;
            }
        }
        if(!flag) cout<<"-1\n";
        else{
            cout<<arr[0]<<" "<<arr[1]<<"\n";
        }
    }
    return 0;
}
