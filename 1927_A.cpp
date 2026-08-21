#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;string s;cin>>n>>s;
        int l=s.length();
        int f=0,la=l-1;
        while(f<la){
            if(s[f]=='B')break;
            f++;
        }
        while(f<la){
            if(s[la]=='B')break;
            la--;
        }
        cout<<la-f+1<<'\n';
    }
    return 0;
}
