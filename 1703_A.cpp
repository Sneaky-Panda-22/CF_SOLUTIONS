#include<iostream>
#include<string>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(int i=0;i<s.length();i++){
            s[i] = tolower(s[i]);
        }
        if(s[0]=='y' && s[1]=='e' && s[2]=='s'){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}
