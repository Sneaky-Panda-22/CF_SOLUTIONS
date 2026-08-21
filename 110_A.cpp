#include <iostream>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    int count = 0;
    while(n > 0) {
        int d = n % 10;
        if(d == 4 || d == 7)
            count++;
        n /= 10;
    }
 
    if(count == 4 || count == 7)
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}
