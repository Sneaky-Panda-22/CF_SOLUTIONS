#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int k;
    cin >> k;
    string s;
    cin >> s;
 
    vector<int> count(26, 0);
    for (char c : s) {
        count[c - 'a']++;
    }
 
    string pattern = "";
    for (int i = 0; i < 26; i++) {
        if (count[i] % k != 0) {
            cout << -1 << "\n";
            return 0;
        }
        pattern.append(count[i] / k, 'a' + i);
    }
    for (int i = 0; i < k; i++) {
        cout << pattern;
    }
    cout << "\n";
    return 0;
}
