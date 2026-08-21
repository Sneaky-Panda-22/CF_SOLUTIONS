#include <iostream>
using namespace std;
 
int main() 
{
    int n;
    cin>>n;
    int y=n;
    int flag = 1;
    while(n>0){
      if(n%10!=4 || n%10!=7){
        flag = 0;
        break;
      }
    }
    if(flag) cout<<"YES";
    else{
      if(y%4==0 || y%7==0|| y%47==0
      || y%44==0 || y%77==0 || y%74==0
      || y%444==0 || y%447==0 || y%474==0
      || y%477==0 || y%744==0 || y%747==0
      || y%774==0 || y%777==0) cout<<"YES";
      else cout<<"NO";
    }
    return 0;
}
