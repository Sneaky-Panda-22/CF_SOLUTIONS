#include<iostream>
using namespace std;
 
int main(){
    long long n, m;
    cin >> n >> m;
    
    if (m % n != 0) {
        cout << "-1\n";
    } 
    else {
        m /= n;
        long long sum = 0;
        
        while (m % 2 == 0) {
            sum++;
            m /= 2;
        }
        
        while (m % 3 == 0) {
            sum++;
            m /= 3;
        }
        
        if (m == 1) {
            cout << sum << '\n';
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}
