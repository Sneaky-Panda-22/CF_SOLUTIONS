#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    if (!(cin >> n)) return 0;
    
    string t;
    cin >> t;
    
    int index = 0;
    int step = 1;
    string decrypted_s = "";
    
    while (index < n) {
        decrypted_s += t[index];
        
        index += step;
        step++;
    }
    
    cout << decrypted_s << "\n";
    
    return 0;
}
