#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;int a[n];
        int curr=0,sum=0;
        for(int i=0;i<n;i++)cin>>a[i];
 
        for(int i=0;i<n-1;i++){
            curr=a[i];
            for(int j=i+1;j<n;j++){
                if(a[j]>curr){
                    a[j]=curr;
                }
            }
        }
        for(int i=0;i<n;i++)sum+=a[i];
        cout<<sum<<'\n';
    }
    return 0;
}
