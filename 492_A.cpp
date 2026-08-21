#include<iostream>
using namespace std;
int main(){
    int N = 1e4+10;
    int hash[N];
    for(int i=0;i<N;i++)hash[i]=0;
    for(int i=1;i<N;i++){
        hash[i] = hash[i-1] + i;
    }
    for(int i=1;i<N;i++){
        hash[i] = hash[i] + hash[i-1];
    }
    int n,i=0;
    cin>>n;
    for(i=0;i<N;i++){
        if(hash[i]>n)break;
    }
    cout << i-1 << '\n';
    return 0;
}
