#include<iostream>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n%2!=0){
            //no case when a==b
            cout << (n-1)/2 << '\n';
        }else{
            cout << (n-2)/2 << '\n';
        }
    }
    return 0;
}
