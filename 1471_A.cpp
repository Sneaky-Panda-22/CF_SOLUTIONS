#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n,x;cin>>n>>x;
        vector<long long>a(n);
        long long maxm=0,minm=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            maxm+=((a[i]+x-1)/x);
            minm+=a[i];
        }
        minm=(minm+x-1)/x;
        cout<<minm<<" "<<maxm<<endl;
    }
    return 0;
}
