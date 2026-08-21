#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;char c;cin>>n>>c;
        string s;cin>>s;
        if(c=='g'){
            cout<<"0\n";
        }
        else{
            s=s+s;
            int maxdist=0;
            int next_green=-1;
            for(int i=2*n;i>=0;i--){
                if(s[i]=='g'){
                    next_green=i;
                }
 
                if(i<n&&s[i]==c){
                    maxdist=max(maxdist, next_green-i);
                }
            }
            cout<<maxdist<<endl;
        }
    }
    return 0;
}
