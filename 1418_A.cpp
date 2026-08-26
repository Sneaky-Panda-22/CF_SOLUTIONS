#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        long long x,y,k;cin>>x>>y>>k;
        long long trades = k;
        trades += (k*y + k+x-3)/(x-1);
        cout << trades << '\n';
    }
    return 0;
}