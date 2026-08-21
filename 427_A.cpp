#include<iostream>
#include<vector>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    int available_officers = 0;
    int untreated_crime = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=-1){
            available_officers+=arr[i];
        }else{
            //crime has occoured (-1)
            if(available_officers<=0){
                untreated_crime++;
            }else{
                available_officers--;
            }
        }
    }
    cout << untreated_crime << '\n';
    return 0;
}
