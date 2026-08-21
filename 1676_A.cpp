#include<iostream>
#include<string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        if(s[0]-'0' + s[1]-'0' + s[2]-'0' == s[n-1]-'0' + s[n-2]-'0' + s[n-3]-'0'){
            cout<<"YES\n";
        }else cout<<"NO\n";
    }
    return 0;
}
