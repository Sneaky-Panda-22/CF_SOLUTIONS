#include<iostream>
#include<numeric>
using namespace std;
 
int main(){
    int t;cin>>t;while(t--){
        long long l,r;cin>>l>>r;
        if(r%l==0)cout << l <<" "<< r << '\n';
        else{
            long long x = l, y = 2*l;
            if(y>r)cout << "-1 -1\n";
            else cout << x << " " << y << '\n';
        }
    }
    return 0;
}
