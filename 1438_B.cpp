#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;vector<long long>a(n);
        set<long long>s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        if(s.size() < n)cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}