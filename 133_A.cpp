#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string str;
    if (!(cin >> str)) return 0;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9') {
            cout << "YES\n";
            return 0; 
        }
    }
    
    cout << "NO\n";
    return 0;
}
