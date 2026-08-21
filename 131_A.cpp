#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    
    if(str[0]>='A' && str[0] <='Z'){
        //first alphabet is uppercase
        //check for all uppercase
        int flag = 1;
        for(int i=1;i<str.length();i++){
            if(str[i]>='a' && str[i]<='z'){
                flag = 0;
                break;
            }
        }
        if(flag) {
            for(int i=0;i<str.length();i++){
                str[i] = tolower(str[i]);
            }
            cout << str << '\n';
        }
        else cout << str << '\n';
    }else{
        //first is lowercase
        //FIX: We must STILL check if all remaining characters are uppercase!
        int flag = 1;
        for(int i=1;i<str.length();i++){
            if(str[i]>='a' && str[i]<='z'){
                flag = 0; // Found a lowercase letter, so don't change anything
                break;
            }
        }
        
        if(flag) {
            str[0] = toupper(str[0]);
            for(int i=1;i<str.length();i++){
                if(str[i]>='A' && str[i] <='Z'){
                    str[i] = tolower(str[i]);
                }
            }
            cout << str << '\n';
        }
        else {
            // If flag is 0, it was a normal word like "code", leave it alone
            cout << str << '\n';
        }
    }
    return 0;
}
