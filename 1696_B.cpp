#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> a(n);
        int all_zero = 1;
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] != 0) all_zero = 0;
        }
        
        if(all_zero){
            cout << "0\n";
        } else {
            int segments = 0;
            for(int i = 0; i < n; i++){
                if(a[i] != 0 && (i == 0 || a[i-1] == 0)){
                    segments++;
                }
            }
            if(segments > 1) cout << "2\n";
            else cout << "1\n";
        }
    }
    return 0;
}
