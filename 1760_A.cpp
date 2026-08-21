#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        vector<int>a(3);
        for(int i=0;i<3;i++)cin>>a[i];
        sort(a.begin(),a.end());
        cout<<a[1]<<'\n';
    }
    return 0;
}
