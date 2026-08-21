#include<iostream>
#include<vector>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s,n;
    cin >> s >> n;
    vector<int>x(n),y(n);
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }
    bool swapped;
    for(int i=0;i<n-1;i++){
        swapped = true;
        for(int j=0;j<n-i-1;j++){
            if(x[j] > x[j+1]){
                swapped = true;
                //swap x[j] ans x[j+1]
                int temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
 
                //swap y[j] and y[j+1]
                int temp1 = y[j];
                y[j] = y[j+1];
                y[j+1] = temp1;
            }
        }
    }
    if(x[0]>s){
        cout << "NO\n";
    }else{
        int flag = 0;
        for(int i=0;i<n;i++){
            if(s > x[i]){
                s+=y[i];
            }else{
                flag = 1;
                break;
            }
        }
        if(flag) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
