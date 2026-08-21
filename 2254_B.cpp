#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;string s,ans;
        cin>>n>>s;
        //ans.push_back(s[0]);
        int i=1,block=1;
        while(i<n){
            char curr=s[i];
            if(curr!=s[i-1]){
                block++;
            }
            i++;
        }
        int b2=0,b1=0;
        for(int i=1;i<n-1;i++){
            if(s[i-1]!=s[i]&&s[i]!=s[i+1]){
                b1=1;
                if(s[i-1]==s[i+1]){
                    b2=1;
                    break;
                }
            }
        }
        if(b2)cout<<block-2<<endl;
        else if(b1)cout<<block-1<<endl;
        else cout<<block<<endl;
    }
    return 0;
}
