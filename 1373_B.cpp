#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        string s;cin >> s;
        int z=0,o=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0')z++;
            else o++;
        }
        if(min(z,o)%2)cout << "DA\n";
        else cout << "NET\n";
    }
    return 0;
}
