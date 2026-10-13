#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int t;cin>>t;while(t--){
        int n,q;cin>>n>>q;
        vector<int>a(n),x(q);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<q;i++)cin>>x[i];
        long long prev = 31;
        for(int i=0;i<q;i++){
            if(x[i]>prev)continue;
            long long val = pow(2,x[i]);
            for(int j=0;j<n;j++){
                if(a[j]%val==0)a[j]+=(val/2);
            }
            prev = x[i];
        }
        for(int v:a)cout << v << " ";
        cout << '\n';
    }
    return 0;
}