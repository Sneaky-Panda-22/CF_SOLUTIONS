#include <iostream>
#include <cmath>
using namespace std;
 
const int N = 1e5 + 10;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        string ans;
        for(int i=0;i<n;i++) cin >> arr[i];
        
        int hsh[N];
        for(int i=0;i<N;i++) hsh[i] = 0;
        
        for(int i=0;i<n;i++){
            hsh[arr[i]]++;
        }
        
        int count = 0;
        for(int i=0;i<N;i++){
            if(hsh[i]!=0) count++;
        }
 
        if(count >= 3) {
            ans = "NO";
        } 
        else if(count == 1) {
            ans = "YES";
        } 
        else if(count == 2) {
            int freq1 = 0, freq2 = 0;
            
            for(int i = 0; i < N; i++) {
                if(hsh[i] != 0) {
                    if(freq1 == 0) {
                        freq1 = hsh[i];
                    } else {
                        freq2 = hsh[i];
                    }
                }
            }
            if(abs(freq1 - freq2) <= 1) {
                ans = "YES";
            } else {
                ans = "NO";
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
