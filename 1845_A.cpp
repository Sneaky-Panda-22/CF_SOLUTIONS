#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k >> x;
        vector<int>ans;
        if(x==1){
            if(k==1 || (k==2 && n%2==1)) cout << "NO\n";
            else{
                cout << "YES\n";
                if(n%2==0){
                    while(n!=0){
                        ans.push_back(2);
                        n = n - 2;
                    }
                    cout << ans.size() << '\n';
                    for(int i=0;i<ans.size();i++){
                        cout << ans[i] << " ";
                    }
                    cout << '\n';
                }else{
                    ans.push_back(3);
                    n = n - 3;
                    while(n!=0){
                        ans.push_back(2);
                        n = n - 2;
                    }
                    cout << ans.size() << '\n';
                    for(int i=0;i<ans.size();i++){
                        cout << ans[i] << " ";
                    }
                    cout << '\n';
                }
            }
        }else{
            cout << "YES\n";
            while(n!=0){
                ans.push_back(1);
                n--;
            }
            cout << ans.size() << '\n';
                for(int i=0;i<ans.size();i++){
                    cout << ans[i] << " ";
                }
                cout << '\n';
        }
        
    }
    return 0;
}
