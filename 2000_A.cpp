#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        string s;cin>>s;
        if(s.length()<3)cout<<"NO\n";
        else if(s.length()==3){
            if(s[0]=='1'&&s[1]=='0'&&s[2]>='2')cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if(s.length()>3){
            if(s[0]=='1'&&s[1]=='0'&&s[2]!='0')cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}
