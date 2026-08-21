#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
long long max(long long a, long long b){
    return a>b? a:b;
}
 
int main(){
    int t;cin>>t;while(t--){
        int w,h;cin>>w>>h;
        int a,b,c,d;
        cin>>a;
        vector<int>x1(a);
        for(int i=0;i<a;i++) cin>>x1[i];
        cin>>b;
        vector<int>x2(b);
        for(int i=0;i<b;i++) cin>>x2[i];
        cin>>c;
        vector<int>y1(c);
        for(int i=0;i<c;i++) cin>>y1[i];
        cin>>d;
        vector<int>y2(d);
        for(int i=0;i<d;i++) cin>>y2[i];
 
        sort(x1.begin(),x1.end());
        sort(x2.begin(),x2.end());
        sort(y1.begin(),y1.end());
        sort(y2.begin(),y2.end());
 
        long long max_area = 0;
        long long base_x1 = x1[a - 1] - x1[0];
        max_area = max(max_area, base_x1 * h);
 
        long long base_x2 = x2[b - 1] - x2[0];
        max_area = max(max_area, base_x2 * h);
 
        long long base_y1 = y1[c - 1] - y1[0];
        max_area = max(max_area, base_y1 * w);
 
        long long base_y2 = y2[d - 1] - y2[0];
        max_area = max(max_area, base_y2 * w);
        
        cout << max_area << '\n';
 
    }
    return 0;
}
