#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        long long n,k,q;
        cin>>n>>k>>q;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]=(a[i]>q?0:1);
        }
        long long ct=0,ans=0;
        for(int i=0;i<n;i++){
            if(a[i]==1)ct++;
            else{
                if(ct>=k){
                    long long diff=ct-k+1;
                    ans+=((diff*(diff+1))/2);
                }
                ct=0;
            }
        }
        if(ct>=k){
            long long diff=ct-k+1;
            ans+=(((diff+1)*diff)/2);
        }
        cout<<ans<<endl;
    }
    return 0;
}
