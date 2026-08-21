#include <iostream>
#include <string>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int count = 0;
        int flag = 0;
        for(int i=0;i<n;i++){
            if(str[i]=='.'){
                count++;
                if(i>=2 && str[i-1]=='.' && str[i-2]=='.'){
                    flag = 1;
                }
            }
        }
        if(flag) cout << "2\n";
        else cout << count << '\n';
    }
    return 0;
}
