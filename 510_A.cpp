#include<iostream>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    char arr[n][m];
    int r=0,c=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]='.';
        }
    }
    while(r<n){
        for(int i=0;i<m;i++){
            arr[r][i]='#';
        }
        r+=2;
    }
    while(c<n){
        arr[c][m-1]='#';
        c+=2;
        arr[c][0]='#';
        c+=2;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<'\n';
    }
    return 0;
}
