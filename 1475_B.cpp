#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n,x=0;cin>>n;
        while(n>=2020){n-=2020;x++;}
        if(x>=n)cout<<"YES\n";
        else cout << "NO\n";
    }
    return 0;
}