#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n),hash(101,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            hash[arr[i]]++;
        }
        for(int i=0;i<101;i++){
            if(hash[i]==1){
                for(int j=0;j<n;j++){
                    if(arr[j]==i){
                        cout<<j+1<<'\n';
                        break;
                    }
                }
                break;
            }
        }
    }
    return 0;
}
