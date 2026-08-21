#include<iostream>
using namespace std;
 
bool is_prime(long long n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
 
int main(){
    int t;cin>>t;while(t--){
        long long n;cin>>n;
        if(is_prime(n)){
            cout << "1 " << n-1 << endl;
        }else{
            if(n%2==0){
                cout << n/2 << " " << n/2 << endl;
            }else{
                long long p = 3; 
                // Find the smallest prime factor of n
                for (p = 3; p * p <= n; p += 2) {
                    if (n % p == 0) {
                        break;
                    }
                }
                long long largest_factor = n / p; 
                
                cout << largest_factor << " " << n - largest_factor << "\n";
            }
        }
    }
    return 0;
}
