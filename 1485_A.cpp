#include<iostream>
#include<algorithm>
#include<cmath>
#include<algorithm>
long long min(long long a,long long b){return a>b?b:a;}
long long max(long long a,long long b){return a>b?a:b;}
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        long long a,b;cin>>a>>b;
        int ans = INT_MAX;
        for(int i=0;i<31;i++){
            long long ops = i,new_b = b+i,new_a = a;
            if(new_b==1)continue;
            while(new_a!=0){
                new_a/=new_b;
                ops++;
            }
            ans = min(ans,ops);
        }
        cout << ans << '\n';
    }
    return 0;
}