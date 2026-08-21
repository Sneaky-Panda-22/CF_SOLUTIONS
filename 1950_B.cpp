#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
        int n;cin>>n;n*=2;
        vector<vector<char>>a(40,vector<char>(40));
        int flag=1;
        for(int i=0;i<40;i+=2){
            for(int j=0;j<2;j++){
                for(int k=0;k<40;k+=4){
                    if(flag){
                        a[i+j][k]='#';
                        a[i+j][k+1]='#';
                        a[i+j][k+2]='.';
                        a[i+j][k+3]='.';
                    }else{
                        a[i+j][k]='.';
                        a[i+j][k+1]='.';
                        a[i+j][k+2]='#';
                        a[i+j][k+3]='#';
                    }
                }
            }
            if(flag)flag=0;
            else flag=1;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j];
            }
            cout<<'\n';
        }
    }
    return 0;
}
