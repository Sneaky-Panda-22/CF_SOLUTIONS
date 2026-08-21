#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,orig="codeforces";
        cin>>s;
        int ct=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=orig[i])ct++;
        }
        cout << ct << '\n';
    }
    return 0;
}
