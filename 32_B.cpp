#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int main() {
    string s;
    cin >> s;
    int n = s.length();
    int i = 0;
    vector<int> a;
    
    while (i < n) {
        if (s[i] == '.') {
            a.push_back(0);
            i++; 
        } else {
            if (s[i + 1] == '.') {
                a.push_back(1);
            } else if (s[i + 1] == '-') {
                a.push_back(2);
            }
            i += 2;
        }
    }
    
    for (int v : a) {
        cout << v;
    }
    cout << '\n';
    
    return 0;
}
