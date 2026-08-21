#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;cin>>t;while(t--){
        int n,k;cin>>n>>k;
        vector<pair<long long,long long>>a(n);
        for(int i=0;i<n;i++){
            long long x;cin>>x;
            if(x%k==0)a[i].first = k;
            else a[i].first = x%k;
            
            a[i].second = i+1;
        }
        sort(a.begin(),a.end(),[&](pair<long long, long long>a,pair<long long, long long>b){
            if(a.first != b.first)return a.first > b.first;
            else return a.second < b.second;
        });
 
        for(auto it:a){
            cout << it.second << " ";
        }
        cout << '\n';
    }
    return 0;
}
