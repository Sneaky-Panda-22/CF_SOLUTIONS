#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int n = t;
    int count = 0;
    while(t--){
        string s;
        cin >> s;
        if(s[0] == 'T') count += 4;
        else if(s[0] == 'C') count +=6;
        else if(s[0] == 'O') count +=8;
        else if(s[0] == 'D') count +=12;
        else if(s[0] == 'I') count +=20;
    }
    cout << count << endl;
    return 0;
}
