#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long a,b,c;
        cin >> a >> b >> c;
        if(c%2==0){
            if(a>b) cout << "First\n";
            else cout << "Second\n";
        }
        else{
            if(a>=b) cout << "First\n";
            else cout << "Second\n";
        }
    }
    return 0;
}
