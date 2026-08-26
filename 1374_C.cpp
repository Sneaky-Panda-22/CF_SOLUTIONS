#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;string s;cin>>n>>s;
        int sum = 0, ans = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='(')sum++;
            else if(s[i]==')')sum--;
            if(sum < 0){
                sum = 0;
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}