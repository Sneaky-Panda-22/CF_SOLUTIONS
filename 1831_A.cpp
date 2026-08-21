#include<iostream>
#include<vector>
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::vector<int>a(n);
        for(int i=0;i<n;i++) {
            std::cin >> a[i];
            std::cout << n + 1 - a[i] << " ";
        }
        std::cout << '\n';
    }
    return 0;
}
