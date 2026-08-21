#include<iostream>
#include<string>
#include<set>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    getline(cin, str);
    set<char>ans;
    for(char c : str) {
        if(c >='a' && c <='z'){
            ans.insert(c);
        }
    }
    cout << ans.size() << endl;
    return 0;
}
