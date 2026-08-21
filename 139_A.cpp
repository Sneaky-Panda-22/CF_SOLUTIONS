#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int pages[7];
    for (int i = 0; i < 7; i++) {
        cin >> pages[i];
    }
 
    int current_day = 0;
    while (n > 0) {
        n -= pages[current_day];
        if (n <= 0) {
            cout << current_day + 1 << endl;
            break;
        }
        current_day = (current_day + 1) % 7;
    }
 
    return 0;
}
