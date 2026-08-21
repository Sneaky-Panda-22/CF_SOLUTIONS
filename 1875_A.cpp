#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;cin>>t;while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        long long sum=b;
        long long arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
            sum+=min(arr[i],a-1);
        }
        cout<<sum<<'\n';
    }
    return 0;
}
