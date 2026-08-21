#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int curr=1,maxl=1;
        for(int i=0;i<n-1;i++){
            if(s[i+1]==s[i]){
                curr++;
                maxl=max(maxl,curr);
            }else{
                curr=1;
            }
        }
        cout<<maxl+1<<'\n';
    }
    return 0;
}
