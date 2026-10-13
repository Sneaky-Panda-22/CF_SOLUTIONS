#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;string s;cin>>n>>s;
        if(s[0]=='1'){
            int ct=0;
            for(char c:s){if(c=='0')ct++;}
            cout << ct << '\n';
        }else{
            string ans = s;
            sort(ans.begin(),ans.end());
            if(s==ans)cout<<"0\n";
            else{
                int total_ones = 0;
                int total_zeros = 0;
                for (char c : s) {
                    if (c == '1') total_ones++;
                    else total_zeros++;
                }
                int min_ops=n;
                int left_ones=0;
                int left_zeros=0;
                for (int i=0;i<n;i++) {
                    if (s[i]=='1') left_ones++;
                    else left_zeros++;
                    int right_zeros = total_zeros - left_zeros;
                    int current_cost = left_ones + right_zeros;
                    min_ops = min(min_ops, current_cost);
                }
                min_ops = min(min_ops, total_zeros);
                cout << min_ops << '\n';
            }
        }
    }
    return 0;
}