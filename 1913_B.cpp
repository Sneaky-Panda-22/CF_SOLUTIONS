#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        string s;cin>>s;
        int n=s.length();
        int zcount=0,ocount=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')zcount++;
            else ocount++;
        }
        int l=0,ct=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'&&ocount>0){
                ocount--;
                l++;
            }
            else if(s[i]=='1'&&zcount>0){
                zcount--;
                l++;
            }else break;
        }
        cout<<n-l<<endl;
    }
    return 0;
}
