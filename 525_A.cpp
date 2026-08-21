#include <iostream>
#include <string>
#include <map>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    map<char, int> keys;
    int ans = 0;
 
    for (int i = 0; i < 2 * n - 2; i++) {
        if (i % 2 == 0) {
            // Pick up the lowercase key
            keys[s[i]]++;
        } else {
            // Find the lowercase version of the uppercase door character
            char required_key = s[i] + 32; 
            
            if (keys[required_key] > 0) {
                keys[required_key]--;
            } else {
                ans++; // Must buy a key
            }
        }
    }
 
    cout << ans << "\n";
    return 0;
}
