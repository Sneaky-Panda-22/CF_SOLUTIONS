#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
int main() {
    vector<pair<int, string>> arr(36);
    for (int i = 0; i < 9; i++) {
        string digit = to_string(i + 1);
        string curr = "";
 
        for (int j = 0; j < 4; j++) {
            curr += digit;
            arr[(i * 4) + j] = {j + 1, curr};
        }
    }
    vector<int>prefix(36,0);
    for(int i=0;i<36;i++)prefix[i]=arr[i].first;
    for(int i=1;i<36;i++){
        prefix[i]=prefix[i]+prefix[i-1];
    }
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int idx=0;
        for(idx=0;idx<36;idx++){
            if(arr[idx].second == to_string(x))break;
        }
        cout << prefix[idx] << '\n';
    }
    return 0;
}
