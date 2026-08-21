#include<iostream>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    int i=1;
    while(1){
        if((k*i-r)%10==0){
            cout<<i<<'\n';
            break;
        }
        else if(k*i%10==0){
            cout<<i<<'\n';
            break;
        }else i++;
    }
    return 0;
}
