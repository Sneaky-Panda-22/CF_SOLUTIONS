#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        vector<long long>a(n);
        long long maxel=0;
        int maxidx=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>maxel){
                maxel=a[i];
                maxidx=i;
            }
        }
        a[maxidx]=0;
        long long max2=0;
        for(int i=0;i<n;i++){
            if(a[i]>max2)max2=a[i];
        }
        for(int i=0;i<n;i++){
            if(i==maxidx){
                cout<<maxel-max2<<" ";
            }else{
                cout<<a[i]-maxel<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
