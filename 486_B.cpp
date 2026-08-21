#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int m, n;
    cin >> m >> n;
    vector<vector<int>> B(m, vector<int>(n));
    vector<vector<int>> A(m, vector<int>(n, 1));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }
 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (B[i][j] == 0) {
                for (int r = 0; r < m; r++) A[r][j] = 0;
                for (int c = 0; c < n; c++) A[i][c] = 0;
            }
        }
    }
    
    vector<vector<int>> check(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] == 1) {
                for (int k = 0; k < m; k++) check[k][j] = 1;
                for (int k = 0; k < n; k++) check[i][k] = 1;
            }
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (check[i][j] != B[i][j]) {
                cout << "NO\n";
                return 0;
            }
        }
    }
    
    cout << "YES\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << '\n';
    }
    
    return 0;
}
