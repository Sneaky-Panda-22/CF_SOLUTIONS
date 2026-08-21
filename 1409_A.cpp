#include<iostream>
#include<cmath>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t; 
    cin >> t; 
    while(t--){
        long long a, b; 
        cin >> a >> b;
        
        long long diff = abs(a - b);
        
        if(diff == 0) {
            cout << "0\n";
        }
        else if(diff % 10 == 0) {
            cout << diff / 10 << '\n';
        }
        else {
            cout << (diff / 10) + 1 << '\n';
        }
    }
    return 0;
}
