#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
    int n;
    if(!(cin>>n)) return 0;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
 
    long long total = a[n-1];
    int curr = a[n-1];
 
    for(int i=n-2;i>=0;i--){
        if(a[i] < curr){
            total += a[i];
            curr = a[i];
        }else{
            curr = max(0, curr - 1);
            total += curr;
        }
    }
 
    cout<<total<<endl;
    return 0;
}
