#include<iostream>
#include<vector>
#include<algorithm>
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::vector<int>a(n);
        int flag = 0;//0 not present
        for(int i=0;i<n;i++) {
            std::cin >> a[i];
            if(a[i]==0){
                flag = 1;//0 present
            }
        }
        if(!flag) std::cout << "0\n";
        else{
            //atleast 1 zero is present
            int zeroCount = 0;
            int maxLength = 0;
            for(int i=0;i<n;i++){
                if(a[i]==0) zeroCount++;
                else zeroCount = 0;
                maxLength = std::max(maxLength, zeroCount);
            }
            std::cout << maxLength << '\n';
        }
    }
    return 0;
}
