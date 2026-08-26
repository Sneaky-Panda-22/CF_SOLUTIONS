#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a.rbegin(),a.rend());
        for(int v:a)cout<<v<<" ";
        cout<<endl;
    }
    return 0;
}