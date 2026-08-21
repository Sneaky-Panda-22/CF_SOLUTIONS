#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        string a,b;
        cin>>a;
        b = a;
        int ct=0;
        sort(b.begin(),b.end());
        for(int i=0;i<a.length();i++){
            if(a[i]!=b[i])ct++;
        }
        if(ct==2 || ct==0)cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
