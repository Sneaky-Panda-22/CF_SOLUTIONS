#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<double> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
 
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
 
    cout << fixed;
    cout.precision(12);  // CF expects accurate decimals
 
    cout << sum / n << endl;
 
    return 0;
}
