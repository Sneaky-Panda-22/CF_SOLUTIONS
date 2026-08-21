#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int flag = 0;
 
    for (int i = 2; i <= n - 2; i += 2) {
        if ((n - i) % 2 == 0) {
            flag = 1;
            break;
        }
    }
 
    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}
