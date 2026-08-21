#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int maxidx = 0;
    int minidx = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > arr[maxidx]){
            maxidx = i;
        }
    }
    
    for(int i = 0; i < n; i++){
        if(arr[i] <= arr[minidx]){
            minidx = i;
        }
    }
    int count = (n - 1 - minidx) + maxidx;
    if (maxidx > minidx) {
        count--;
    }
    
    cout << count;
    return 0;
}
