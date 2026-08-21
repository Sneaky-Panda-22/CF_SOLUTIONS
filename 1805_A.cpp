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
        std::vector<int>arr(n);
        for(int i=0;i<n;i++) std::cin >> arr[i];
        long long totalXOR = 0;
        for(int i=0;i<n;i++){
            totalXOR = totalXOR ^ arr[i];
        }
        if(n%2==1) {
            std::cout << totalXOR << '\n';
        }else{
            if(totalXOR == 0) std::cout << totalXOR << '\n';
            else std::cout << "-1\n";
        }
    }
    return 0;
}
