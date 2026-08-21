#include<iostream>
#include<algorithm>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n,x,y,z;
        cin >> n >> x >> y >> z;
        if(x + y >= n) cout << "1\n";
        else{
            int count = 0, temp_count = 0;
            int X = x, Y = y, N = n;
            while(z--){
                n = n - x;//max's work
                count++;
                if(n<=0) break;
            }
            y = y*10;
            while(n>0){
                n = n - (x+y);
                count++;
            } 
 
            while(N>0){
                N = N - (X+Y);
                temp_count++;
            }
            count = min(temp_count,count);
            cout << count << '\n';
        }
    }
    return 0;
}
