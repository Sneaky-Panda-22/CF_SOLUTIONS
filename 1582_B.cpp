#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;vector<long long>a(n);
        int zero_ct = 0, one_ct = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==0)zero_ct++;
            else if(a[i]==1)one_ct++;
        }
        long long total = pow(2,zero_ct)*one_ct;
        cout << total << '\n';
    }
    return 0;
}
