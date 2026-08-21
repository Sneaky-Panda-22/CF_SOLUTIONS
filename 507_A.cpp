#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n,k;cin>>n>>k;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i].first;
        a[i].second = i+1;
    }
 
    sort(a.begin(),a.end(),[](const auto &x, const auto &y){
        return x.first < y.first;
    });
    
    if(a[0].first > k)cout << "0\n";
    else{
        vector<int>learned;
        int remaining_days = k;
        for(int i=0;i<n;i++){
            if(remaining_days >= a[i].first){
                remaining_days-=a[i].first;
                learned.push_back(a[i].second);
            }else{
                break;
            }
        }
        cout << learned.size() << '\n';
        for(auto &it:learned){
            cout << it << ' ';
        }
        cout << '\n';
    }
    return 0;
}
