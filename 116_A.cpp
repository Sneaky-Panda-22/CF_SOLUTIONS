#include <iostream>
#include <climits>
using namespace std;
 
int main() 
{
    int n;
    cin >> n;
    int arr[2*n];
    for(int i=0;i<2*n;i++) {
      cin >> arr[i];
    }
    int maxSum=INT_MIN;
    int curSum=0;
    for(int i=1;i<=2*n;i+=2) {
      curSum = curSum + arr[i] - arr[i-1];
      maxSum = max(maxSum,curSum);
    }
    cout<<maxSum;
    return 0;
}
