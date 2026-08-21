#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long x,k;
        cin >> x >> k;
        vector<int>ans;
        if(x%k==0){
            cout << "2\n";
            cout << x-1 << " " << "1\n";
        }else{
            cout << "1\n";
            cout << x << '\n';
        }
    }
    return 0;
}
