#include<iostream>
#include<string>
using namespace std;
 
int main(){
    int t;cin>>t;while(t--){
        string s;cin>>s;
        if(s[0]!=s[s.length()-1]){
            if(s[0]=='a')s[0]='b';
            else s[0] = 'a';
        }
        cout << s << '\n';
    }
    return 0;
}
