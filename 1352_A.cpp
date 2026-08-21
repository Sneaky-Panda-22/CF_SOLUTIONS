#include<iostream>
#include<vector>
using namespace std;
 
const int N = 1e4 + 10;
int arr[N];
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=1;i<N;i++){
        int temp = i;
        while(temp%10==0) temp/=10;
        if(temp < 10) arr[i] = 1;
        else arr[i] = 0;
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(arr[n]==1){
            cout << "1\n";
            cout << n << '\n';
        }else{
            vector<int>ans;
            for(int i=n;i>=1;i--){
                if(arr[i]==1 && n >=i){
                    n = n - i;
                    ans.push_back(i);
                }
            }
            cout << ans.size() << '\n';
            for(int val : ans){
                cout << val << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
