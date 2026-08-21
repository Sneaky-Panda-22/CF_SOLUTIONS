#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
 
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;vector<long long>a(n);
        map<long long,long long>freq;
        for(int i{};i<n;i++){
            cin>>a[i];
            freq[a[i]]++;
        }
        int flag{};
        for(auto i:freq){
            if(i.second == 1){
                flag = 1;
                break;
            }
        }
        if(flag)cout << "-1\n";
        else{
            vector<long long>perm(n);
            for(int i{};i<n;i++){
                perm[i] = i+1;
            }
            long long l=0,r=0;
            while(r<n){
                if(a[l]==a[r])r++;
                else{
                    rotate(perm.begin()+l,perm.begin()+l+1,perm.begin()+r);
                    l = r;
                }
            }
            rotate(perm.begin()+l,perm.begin()+l+1,perm.begin()+r);
            for(auto i:perm){
                cout << i << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}
