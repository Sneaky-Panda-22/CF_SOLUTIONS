#include<iostream>
#include<string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string str;
    cin >> str;
    for(int i=0;i<str.length();i++){
        if(str[i]-'0' == 9 && i==0)continue;
        else if(str[i]-'0' > 4) str[i] = (9 - (str[i] - '0')) + '0';
    }
    cout << str << endl;
    return 0;
}
