#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        long long n;cin>>n;
        long long ct3=0,ct2=0;
        while(n>0&&n%2==0){
            ct2++;
            n/=2;
        }
        while(n>0&&n%3==0){
            ct3++;
            n/=3;
        }
        if(n>1 || ct3<ct2)cout<<-1<<endl;
        else cout<<2*ct3-ct2<<endl;
    }
    return 0;
}
