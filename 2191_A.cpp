#include<iostream>
#include<string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int color[n];
        for(int i=0;i<n;i++){
            if(i%2==0) color[i] = 0;
            else if(i%2!=0) color[i] = 1;
            cin >> arr[i];
        }
        // for(int i=0;i<n;i++) cout << color[i] << " ";
        // cout << endl;
        //bubble sort
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    //swap colors
                    int temp1 = color[j];
                    color[j] = color[j + 1];
                    color[j + 1] = temp1;
                }
            }
        }
        // for(int i=0;i<n;i++) cout << color[i] << " ";
        // cout << endl;
        // for(int i=0;i<n;i++) cout << arr[i] << " ";
 
        int flag = 0;
        for(int i=0;i<n-1;i++){
            if(color[i]==color[i+1]){
                flag = 1;
                break;
            }
        }
        if(flag) cout << "no" << endl;
        else cout << "yes" << endl;
    }
    return 0;
}
