#include<iostream>
#include<numeric>
using namespace std;
 
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;long long sum = 0,o=0,e=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            sum+=x;
            if(x%2==0)e++;
            else o++;
        }
        if(sum%2==1)cout << "YES\n";
        else{
            if(e>0 && o>0)cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}
