#include<iostream>
using namespace std;
int main(){
    long long n;cin>>n;
    long long ans = 1 + 3*n*(n+1);
    cout << ans << '\n';
    return 0;
}
