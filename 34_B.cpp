#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int m,n;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    long long sum=0;
    for(int i=0;i<m;i++){
        if(a[i]<0)sum+=a[i];
    }
    cout<<-sum<<'\n';
    return 0;
}
