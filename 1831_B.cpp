#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;cin>>t;while(t--){
        int n;cin>>n;vector<int>a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
 
        vector<int>max_a(2*n+1, 0),max_b(2*n+1, 0);
        int streak = 1;
        for(int i=0;i<n;i++){
            if(i==n-1 || a[i]!=a[i+1]){
                max_a[a[i]] = max(streak, max_a[a[i]]);
                streak = 1;
            }else{
                streak++;
            }
        }
        streak = 1;
        for(int i=0;i<n;i++){
            if(i==n-1 || b[i]!=b[i+1]){
                max_b[b[i]] = max(streak, max_b[b[i]]);
                streak = 1;
            }else{
                streak++;
            }
        }
        int ans = 0;
        for(int i=0;i<max_a.size();i++){
            ans = max(ans, max_a[i]+max_b[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}
