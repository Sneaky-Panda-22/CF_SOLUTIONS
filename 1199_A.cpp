#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
 
    int n,x,y;cin>>n>>x>>y;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
 
    for(int i=0;i<=n-1;i++){
        int fflag=1,bflag=1;
        int start_j=max(0,i-x);
        for(int j=start_j;j<i;j++){
            if(a[j]<=a[i]){
                fflag=0;break;
            }
        }
        int end_j=min(n-1,i+y);
        for(int j=i+1;j<=end_j;j++){
            if(a[j]<=a[i]){
                bflag=0;break;
            }
        }
        if(fflag&&bflag){
            cout<<i+1<<'\n';
            break;
        }
    }
 
    return 0;
}
