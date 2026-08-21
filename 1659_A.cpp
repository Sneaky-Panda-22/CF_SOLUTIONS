#include<iostream>
#include<string>
using namespace std;
 
int main(){
    int t;cin>>t;while(t--){
        int n,r,b;cin>>n>>r>>b;
        int mx = (r)/(b+1);
        int rm = r%(b+1);
        string ans="";
        for(int i=1;i<=b+1;i++){
            for(int j=0;j<mx;j++){
                ans+='R';
            }
            if(rm>0){
                ans+='R';
                rm--;
            }
            if(i!=b+1)ans+='B';
        }
        cout << ans << '\n';
    }
    return 0;
}
