#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    int n;cin>>n;
    map<string,int>m;
    while(n--){
        string s;cin>>s;
        if(m[s]==0){
            cout<<"OK\n";
            m[s]++;
        }else{
            cout<<s<<m[s]<<'\n';
            m[s]++;
        }
    }
    return 0;
}
