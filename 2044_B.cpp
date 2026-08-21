#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        string a,b;cin>>a;
        for(int i=a.length();i>=0;i--){
            if(a[i]=='p'){
                b.push_back('q');
            }
            if(a[i]=='q'){
                b.push_back('p');
            }
            if(a[i]=='w'){
                b.push_back('w');
            }
        }
        cout<<b<<endl;
    }
    return 0;
}
