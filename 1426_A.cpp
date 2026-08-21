#include<iostream>
#include<numeric>
using namespace std;
 
int main(){
    int t;cin>>t;while(t--){
        int n,x;cin>>n>>x;
        if(n==1||n==2)cout << "1\n";
        else{
            int ans = (n-3)/x + 2;
            cout << ans << endl;
        }
    }
    return 0;
}
