#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    if (!(cin >> s)) return 0;
    
    string target = "hello";
    int target_idx = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == target[target_idx]) {
            target_idx++;
        }
        
        if (target_idx == 5) {
            cout << "YES\n";
            return 0;
        }
    }
    
    cout << "NO\n";
    return 0;
}
