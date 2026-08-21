#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s="codeforces";
        char c; cin>>c;
        int flag=0;
        for(int i=0;i<s.length();i++){
            if(c==s[i]){
                flag=1;break;
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
