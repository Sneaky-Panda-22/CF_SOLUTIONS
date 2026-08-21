#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        
        vector<long long> b(n);
        for(long long i = 0; i < n; i++) cin >> b[i];
        
        vector<long long> a;
        a.push_back(b[0]);
        for(long long i = 1; i < n; i++){
            if(b[i] >= b[i-1]){
                a.push_back(b[i]);
            } else {
                a.push_back(b[i]);
                a.push_back(b[i]);
            }
        }
        
        cout << a.size() << '\n';
        for(long long i = 0; i < a.size(); i++){
            cout << a[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}
