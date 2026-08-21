#include<iostream> 
#include<string> 
using namespace std; 
 
int main(){     
    int t;
    cin >> t;
    cin >> ws; 
    
    while(t--){     
        string s;     
        getline(cin, s);     
        if(s.length() == 0) {
            cout << endl;
            continue;
        }
     
        cout << s[0];     
        for(int i = 1; i < s.length(); i++){         
            if(s[i-1] == ' ' && s[i] != ' ') {
                cout << s[i];     
            }
        }     
        cout << endl;     
    }     
    return 0; 
}
