#include<iostream>
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while(t--){
        long long n, k;
        std::cin >> n >> k;
        if(n%2 == 0) std::cout << "YES\n";
        else if((n-k)%2==0) std::cout << "YES\n";
        else std::cout << "NO\n";
    }
    return 0;
}
