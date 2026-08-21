#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,k;
    cin >> n >> k;
    if(n%2==0){
        if(k<=n/2){
            cout << 2*k - 1 << endl;
            return 0;
        }else{
            long long temp = k - n/2;
            cout << 2*temp << endl;
            return 0;
        }
    }else{
        if(k<=(n/2 + 1)){
            cout << 2*k - 1;
            return 0;
        }else{
            long long temp = k - (n/2) - 1;
            cout << 2*temp;
            return 0;
        }
    }
}
