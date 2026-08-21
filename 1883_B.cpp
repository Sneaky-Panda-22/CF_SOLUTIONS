#include<iostream>
#include<string>
#include<vector>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int>arr(26,0);
        for(int i=0;i<n;i++){
            arr[s[i]-'a']++;
        }
        int odd_freq = 0;
        for(int i=0;i<26;i++){
            odd_freq+=arr[i]%2;
        }
        if(odd_freq > k+1) cout << "NO\n";
        else cout <<"YES\n";
    }
    return 0;
}
