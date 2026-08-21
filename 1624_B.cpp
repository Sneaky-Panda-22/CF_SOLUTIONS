#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        
        long long newa=2*b-c;
        long long newb=(a+c)/2;
        long long newc=2*b-a;
 
 
        bool flag=false;
        if(newa%a==0&&newa/a>0){
            flag=true;
        }
        if(newb%b==0&&newb/b>0&&(c-a)%2==0){
            flag=true;
        }
        if(newc%c==0&&newc/c>0){
            flag=true;
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
