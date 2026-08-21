#include<iostream>
#include<vector>
#include<numeric>
#include<cmath>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        long long a,b;cin>>a>>b;
        if(a==b)cout << "0 0\n";
        else {
            long long mh = abs(b-a);
            cout << mh << " " << min(b%mh,mh - min(a,b)%mh) << '\n';
        }
    }
    return 0;
}
