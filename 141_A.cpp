#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int arr[26], final[26];
 
int main() {
    string guest,host,pile;
    cin >> guest >> host >> pile;
    string temp = guest + host;
    sort(temp.begin(),temp.end());
    sort(pile.begin(), pile.end());
    if(temp==pile) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
