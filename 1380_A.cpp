#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int flag=0;
        for(int i=1;i<=n-2;i++){
            if(a[i]>a[i-1]&&a[i]>a[i+1]){
                flag=1;
                cout<<"YES\n";
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;
                break;
            }
        }
        if(!flag)cout<<"NO\n";
 
    }
    return 0;
}
