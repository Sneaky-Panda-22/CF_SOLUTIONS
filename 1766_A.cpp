#include <iostream>
const int N=1e7 + 10;
int arr[N];
int prefix[N];
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    for(int i=1;i<=N;i++){
      int temp = i;
      while(temp%10==0)temp/=10;
      if(temp<10)arr[i]=1;
      else arr[i]=0;
    }
    for(int i=1;i<N;i++){
      prefix[i]=prefix[i-1]+arr[i];
    }
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      cout<<prefix[n]<<endl;
    }
    return 0;
}
