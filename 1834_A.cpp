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
        int hsh[2];
        hsh[0] = hsh[1] = 0;
        //store -1 count in hsh[0] & +1 count in hsh[1]
        for(int i=0;i<n;i++) {
            std::cin >> arr[i];
            if(arr[i] > 0) hsh[1]++;
            else hsh[0]++;
        }
        int count = 0;
        while(hsh[0] > hsh[1]){
            hsh[0]--;
            hsh[1]++;
            count++;
        }
        if(hsh[0]%2!=0) count++;
        std::cout << count << '\n';
    }
    return 0;
}
