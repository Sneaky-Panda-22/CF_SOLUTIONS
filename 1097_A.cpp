#include<iostream>
#include<string>
#include<vector>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    int flag = 0;
    vector<string>cards(5);
    for(int i=0;i<5;i++){
        cin >> cards[i];
        if(s[0]==cards[i][0])flag = 1;
        else if(s[1]==cards[i][1])flag = 1;
    }
    if(flag)cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
