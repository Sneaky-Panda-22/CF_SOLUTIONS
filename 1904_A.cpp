#include<iostream>
#include<set>
using namespace std;
int main(){
    int dx[4]={1,-1,-1,1};
    int dy[4]={1,1,-1,-1};
    int t;cin>>t;while(t--){
        long long a,b;
        cin>>a>>b;
        long long xk,yk,xq,yq;
        cin>>xk>>yk>>xq>>yq;
 
        set<pair<long long,long long>>king_hits,queen_hits;
 
        for(int i=0;i<4;i++){
            king_hits.insert({xk+dx[i]*a,yk+dy[i]*b});
            king_hits.insert({xk+dx[i]*b,yk+dy[i]*a});
 
            queen_hits.insert({xq+dx[i]*a,yq+dy[i]*b});
            queen_hits.insert({xq+dx[i]*b,yq+dy[i]*a});
        }
        int ans=0;
        for(auto &it:king_hits){
            if(queen_hits.find(it)!=queen_hits.end())ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
