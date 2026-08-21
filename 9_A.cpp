#include <iostream>
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
 
    int m = max(a, b);
    int fav = 6 - m + 1;
 
    if (fav == 6) cout << "1/1";
    else if (fav == 3) cout << "1/2";
    else if (fav == 2) cout << "1/3";
    else if (fav == 1) cout << "1/6";
    else if (fav == 4) cout << "2/3";
    else if (fav == 5) cout << "5/6";
 
    return 0;
}
