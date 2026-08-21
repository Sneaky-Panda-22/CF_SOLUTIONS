#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
  int a,b;
  cin >> a >>b;
  int n=0;
  for(int i=0; ;i++){
    if(pow(3,i)*a> pow(2,i)*b){
      n=i;
      break;
    }
  }
  cout<<n;
  return 0;
}
