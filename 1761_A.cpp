#include <iostream>
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      int n,a,b;
      cin>>n>>a>>b;
      if((a==n&&b==n) || a+b<=n-2){
        cout<<"YES\n";
      }else{
        cout<<"NO\n";
      }
    }
    return 0;
}
