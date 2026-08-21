#include<iostream>
#include<cmath>
using namespace std;
 
int main(){
    int n,m,ct=0;
    cin >> n >> m;
    int totalpts = n*m;
    while(min(m,n)!=0){
        totalpts = totalpts - ((n-1)+(m-1));
        n--;
        m--;
        ct++;
    }
    if(ct%2==0)cout << "Malvika\n";
    else cout << "Akshat\n";
    return 0;
}
