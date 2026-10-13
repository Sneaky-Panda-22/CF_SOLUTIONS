#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t; cin >> t;while(t--){
        long long n, c;
        cin >> n >> c;
        
        long long sum_a = 0;
        long long sum_a_sq = 0;
        
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            sum_a += a;
            sum_a_sq += a * a;  
        }
        double A = 4.0 * n;
        double B = 4.0 * sum_a;
        double C = (double)sum_a_sq - (double)c;
        long double discriminant = (long double)B * B - 4.0 * A * C;
        long double w = (-B + sqrt(discriminant)) / (2.0 * A);
        cout << (long long)round(w) << '\n';
    }
    return 0;
}
