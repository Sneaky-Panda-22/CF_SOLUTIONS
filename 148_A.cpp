#include<iostream>
#include<string>
#include<set>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    if(k==1) cout << d << endl;
    else{
        int count = 0;
        for(int i=1;i<=d;i++){
            if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0){
                count++;
            }
        }
        cout << d-count << endl;
    }
    return 0;
}
