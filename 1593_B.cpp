#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
long long get_deletions(const string& s, const string& t){
    int idx = 1;
    long long deletions = 0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]==t[idx]){
            idx--;
            if(idx<0)return deletions;
        }else{
            deletions++;
        }
    }
    return LONG_MAX;
}
long long min(long long a, long long b){
    return a>b?b:a;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;cin >> t;while(t--) {
        string s;cin >> s;
        vector<string>targets = {"00","25","50","75"};
        long long min_deletions = s.length();
        for(const string& target:targets){
            min_deletions = min(min_deletions, get_deletions(s,target));
        }
        cout << min_deletions << '\n';
    }
    return 0;
}
