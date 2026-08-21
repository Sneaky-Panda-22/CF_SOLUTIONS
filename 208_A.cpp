#include<iostream>
#include<string>
#include<vector>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    vector<char>ans;
    int idx = 0;
    while(idx <= s.length()-1) {
        if(s[idx]=='W' && s[idx+1]=='U' && s[idx+2]=='B'){
            if(ans.size()!=0 && ans.back()!=' ') ans.push_back(' ');
            idx = idx + 3;
        }else{
            ans.push_back(s[idx]);
            idx++;
        }
    }
    for(char c:ans){
        cout << c;
    }
    cout << endl;
    return 0;
}
