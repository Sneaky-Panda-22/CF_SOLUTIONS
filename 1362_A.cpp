#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        long long a,b;cin>>a>>b;
        long long t1 = a, t2 = b;
        while(t1%2==0)t1/=2;
        while(t2%2==0)t2/=2;
        if(t1!=t2)cout << "-1\n";
        else{
            long long ap = 0, bp = 0;
            a = a/t1;b = b/t2;
            while(a>0){
                a/=2;ap++;
            }
            while(b>0){
                b/=2;
                bp++;
            }
            long long diff = abs(ap-bp);
            cout << (diff + 2)/3 << '\n';
        }
    }
    return 0;
}