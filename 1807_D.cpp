#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<long long>arr(n),prefix(n+1,0);
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        for(int i=1;i<=n;i++){
            prefix[i]=prefix[i-1]+arr[i-1];
        }
        while(q--){
            long long l,r,k;
            cin>>l>>r>>k;
            long long rsum=prefix[r]-prefix[l-1];
            long long asum=(r+l-1)*k;
            if((sum+asum-rsum)%2){
                cout<<"YES\n";
            }else cout<<"NO\n";
        }
    }
    return 0;
}
