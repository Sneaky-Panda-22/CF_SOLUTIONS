#include <iostream>
using namespace std;
 
int main() {
    string s1, s2;
    cin >> s1 >> s2;
 
    // convert s1 to uppercase
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] >= 'a')
            s1[i] = s1[i] - 32;
    }
 
    // convert s2 to uppercase
    for (int i = 0; i < s2.length(); i++) {
        if (s2[i] >= 'a')
            s2[i] = s2[i] - 32;
    }
 
    // compare
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] < s2[i]) {
            cout << -1;
            return 0;
        } 
        else if (s1[i] > s2[i]) {
            cout << 1;
            return 0;
        }
    }
 
    cout << 0;
    return 0;
}
