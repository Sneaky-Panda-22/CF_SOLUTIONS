#include<iostream>
#include<string>
using namespace std;
int arr[26];
 
int main() {
    int n, flag=1;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<n;i++){
        arr[tolower(s[i]) - 'a']++;
    }
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            flag = 0;
            break;
        }
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
