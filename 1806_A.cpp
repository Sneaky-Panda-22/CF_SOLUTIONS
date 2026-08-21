#include<iostream>
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while(t--){
        long long a,b,c,d;
        std::cin >> a >> b >> c >> d;
        long long count = 0;
        if(b > d) std::cout << "-1\n";
        else{
            count = d - b;// diagonal moves required
            a = a + count; // new x-coordinate
            if(a < c){
                std::cout << "-1\n";
            }else{
                count += a - c;
                std::cout << count << '\n';
            }
        }
    }
    return 0;
}
