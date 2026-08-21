#include <iostream>
using namespace std;
 
int main() {
    int a, b;
    if (!(cin >> a >> b)) return 0;
    
    long long sum = a;
    while (a >= b) {
        int new_candles = a / b;   
        int leftovers = a % b;
        
        sum += new_candles;       
        a = new_candles + leftovers; 
    }
    
    cout << sum << "\n";
    return 0;
}
