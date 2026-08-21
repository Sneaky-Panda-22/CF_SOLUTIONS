#include<iostream>
#include<unordered_set>
#include<string>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;cin>>t;while(t--){
        int n;string s;cin>>n>>s;
        unordered_set<char>letter;
        vector<int>prefix(n+1, 0);
        vector<int>suffix(n+1, 0);
        for(int i=0;i<n;i++){
            letter.insert(s[i]);
            prefix[i]=letter.size();
        }
        letter.clear();
        for(int i=n-1;i>=0;i--){
            letter.insert(s[i]);
            suffix[i]=letter.size();
        }
        int ans{};
        for(int i{};i<n;i++){
            ans = max(ans,prefix[i]+suffix[i+1]);
        }
        cout <<ans<<endl;
    }
    return 0;
}
