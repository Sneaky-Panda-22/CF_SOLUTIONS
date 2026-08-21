#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;vector<long long>a(n), ans(n+1,0);
        vector<pair<long long, long long>>building_map;
        for(int i=0;i<n;i++){
            cin >> a[i];
            building_map.push_back({a[i],i});
        }
        sort(building_map.rbegin(),building_map.rend());
        
        long long minutes = 0, coordinate = 1;
        for(int i=0;i<n;i++){
            ans[building_map[i].second + 1] = coordinate;
            minutes += (2*abs(coordinate))*building_map[i].first;
            if(coordinate < 0) coordinate = abs(coordinate) + 1;
            else coordinate = -coordinate;
        }
 
        cout << minutes << endl;
        for(auto &it:ans){
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
