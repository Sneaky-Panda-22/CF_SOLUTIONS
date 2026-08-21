#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;string s;cin>>n>>s;
        int curr=0,maxl=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='#'){
                curr++;
                maxl=max(maxl,curr);
            }else{
                curr=0;
            }
        }
        cout<<(1+maxl)/2<<endl;
    }
    return 0;
}
