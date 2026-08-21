#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
 
int main(){
    int t;cin>>t;while(t--){
        int n,k;string s;
        cin>>n>>k>>s;
        vector<int>prefix(n,0);
        if(s[0]=='W')prefix[0] = 1;
        else prefix[0] = 0;
        for(int i=1;i<n;i++){
            if(s[i]=='W'){
                prefix[i] = prefix[i-1]+1;
            }else{
                prefix[i] = prefix[i-1];
            }
        }
        int ans = n;
        int i=0;
        while(i+k-1<n){
            if(i==0){
                ans = min(ans,prefix[i+k-1]);
            }else{
                ans = min(ans,prefix[i+k-1]-prefix[i-1]);
            }
            i++;
        }
 
        cout << ans << '\n';
    }
    return 0;
}
