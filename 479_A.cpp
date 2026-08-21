#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int a, b, c;
    if (!(cin >> a >> b >> c)) return 0;
    
    int max_val = 0;
 
    max_val = max(max_val, a + b + c);
    max_val = max(max_val, a * b * c);
    max_val = max(max_val, a + b * c);
    max_val = max(max_val, a * b + c);
    max_val = max(max_val, (a + b) * c);
    max_val = max(max_val, a * (b + c));
 
    cout << max_val << '\n';
    return 0;
}
