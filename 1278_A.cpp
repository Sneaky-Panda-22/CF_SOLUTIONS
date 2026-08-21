#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t; while(t--){
        string p, h; cin >> p >> h;
        
        if (p.length() > h.length()) {
            cout << "NO\n";
            continue;
        }
 
        vector<int>orig_hash(26,0);
        for(int i=0; i<p.length(); i++){
            orig_hash[p[i]-'a']++;
        }
 
        int start = p.length()-1;
        int end = 0;
        int global_found = 0;//any matched.
 
        while(start < h.length()){
            vector<int>window_hash(26,0);
 
            for(int i=end; i<=start; i++){
                window_hash[h[i]-'a']++; 
            }
            
            int flag=1;
            for(int i=0; i<26; i++){
                if(window_hash[i] != orig_hash[i]){
                    flag = 0;
                    break;
                }
            }
            
            if(flag){
                cout << "YES\n";
                global_found = 1;
                break;
            } else {
                start++; end++;
            }
        }
        if (!global_found) {
            cout << "NO\n";
        }
    }
    return 0;
}
