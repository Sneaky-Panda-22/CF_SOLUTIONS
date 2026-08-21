#include <iostream>
#include <string>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str1, str2;
    cin >> str1;
    cin >> str2;
    int n = str1.length();
    for(int i=0; i<n; i++){
        if(str1[i] == str2[i]) cout << "0";
        else cout << "1";
    }
    cout << endl;
    return 0;
}
