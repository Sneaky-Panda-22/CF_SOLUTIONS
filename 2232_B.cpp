#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        //vector<long long>arr(n);
        long long min_height = LONG_MAX;
        long long curr_sum = 0;
        for(int i=1;i<=n;i++){
            long long a;
            cin >> a;
            curr_sum+=a;
            if(curr_sum/i < min_height){
                min_height = curr_sum/i;
            }
            cout << min_height << " ";
        }
        cout << '\n';
    }
    return 0;
}
