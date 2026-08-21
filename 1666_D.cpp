#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        string s,t;cin>>s>>t;
        vector<int>hasht(26,0);
        for(int i=0;i<t.length();i++){
            hasht[t[i]-'A']++;
        }
 
        for(int i=s.length()-1;i>=0;i--){
            if(hasht[s[i]-'A']>0){
                hasht[s[i]-'A']--;
            }else{
                s[i]='#';
            }
        }
        //cout<<s<<endl;
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]!='#'){
                ans+=s[i];
            }
        }
        if(ans==t)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
