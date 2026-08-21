#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    int l = 0, r = n - 1;
    long long sereja = 0, dima = 0;
    bool turn = true;
 
    while (l <= r) {
        int x;
        if (a[l] > a[r]) {
            x = a[l++];
        } else {
            x = a[r--];
        }
 
        if (turn) sereja += x;
        else dima += x;
 
        turn = !turn;
    }
 
    cout << sereja << " " << dima << '\n';
    return 0;
}
