#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int n, k;
    cin >> n >> k;
    int rem = 240 - k;
    
    if (rem <= 0) {
        cout << "0\n";
    } else {
        vector<int> arr;
        int i = 1;
        int original_n = n;
        
        while(n--){
            arr.push_back(5 * i);
            i++;
        }
        
        for(int i = 1; i < arr.size(); i++){
            arr[i] += arr[i - 1];
        }
        
        bool printed = false;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > rem){
                cout << i << '\n';
                printed = true;
                break; 
            }
        }
        if(!printed){
            cout << original_n << '\n';
        }
    }
    return 0;
}
