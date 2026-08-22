#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<utility>
#include<cctype>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;cin >> t;while(t--){
        string a,b;
        cin >> a >> b;
        if(a==b){
            cout << "0\n";
        }
        else{
            int m = a.length(), n = b.length();
            int ans = m+n;
            for(int i=0;i<m;i++){
                for(int j=1;j<=m-i;j++){
                    string a_sub = a.substr(i,j);

                    if(b.find(a_sub)!=string::npos){
                        int ops = (m-j)+(n-j);
                        ans = min(ans,ops);
                    }
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}