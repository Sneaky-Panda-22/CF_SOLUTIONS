#include <iostream>
#include <vector>
using namespace std;
 
int main() {
  int n,h;
  cin >> n >> h;
  int nums[n];
  for(int i=0;i<n;i++){
    cin >> nums[i];
  }
  int count = 0;
  for(int i=0;i<n;i++){
    if(nums[i]>h) count+=2;
    else count++;
  }
  cout<<count;
  return 0;
}
