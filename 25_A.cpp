#include<iostream>
#include<vector>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,even,odd,evenCount = 0,oddCount = 0;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        if(arr[i]%2==0){
            evenCount++;
            even = i;
        }else{
            oddCount++;
            odd=i;
        }
    }
    if(evenCount == 1)cout << even + 1 << endl;
    else cout << odd + 1 << endl;
    return 0;
}
