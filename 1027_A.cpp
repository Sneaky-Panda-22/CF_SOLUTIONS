#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t; 
    while(t--){
        int n; string s; cin >> n >> s;
        int front = 0, rear = n - 1, flag = 1;
        
        while(front < rear){
            int diff = abs(s[front] - s[rear]);
            if (diff != 0 && diff != 2) {
                flag = 0;
                break;
            }
            front++;
            rear--;
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
