#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int upper = 0, lower = 0;
 
    for(char c : s) {
        if(c >= 'a' && c <= 'z')
            lower++;
        else
            upper++;
    }
 
    if(upper > lower) {
        for(char &c : s)
            c = toupper(c);
    } else {
        for(char &c : s)
            c = tolower(c);
    }
 
    cout << s;
    return 0;
}
