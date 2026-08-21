#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int x=0;
    int n;
    cin>>n;
    vector<string>ins(n);
    for(int i=0;i<n;i++){
        cin>>ins[i];
        if(ins[i]=="X++"||ins[i]=="++X") x++;
        else x--;
    }
    cout<<x<<endl;
    return 0;
}
