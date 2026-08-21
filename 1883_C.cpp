#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n,k;cin>>n>>k;
        vector<int>a(n);
        //bool ans=false;
        //int prod=1;
        int even=0;
        int minmove=11;
        for(int i=0;i<n;i++){
            cin>>a[i];
            //prod*=a[i];
            if(a[i]%2==0)even++;
            if(a[i]%k==0){
                minmove=0;
            }
            minmove=min(minmove,k-a[i]%k);
        }
        if(k!=4){
            cout<<minmove<<endl;
        }else{
            if(even>=2){
                minmove=min(minmove,0);
            }
            else if(even==1){
                minmove=min(minmove,1);
            }
            else if(even==0){
                minmove=min(minmove,2);
            }
 
            cout<<minmove<<endl;
        }
    }
    return 0;
}
