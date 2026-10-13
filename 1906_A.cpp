#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string minstr = "ZZZ";
int dr[] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dc[] = {-1, 0, 1, 1, 1, 0, -1, -1};
bool visited[3][3]; 
void dfs(int r, int c, string current, vector<string>& grid) {
    current += grid[r][c];
    if (current.length() == 3) {
        minstr = min(minstr, current);
        return;
    }
    visited[r][c] = true;
    for (int i = 0; i < 8; i++) {
        int nr = r + dr[i];
        int nc = c + dc[i];
        if (nr >= 0 && nr < 3 && nc >= 0 && nc < 3 && !visited[nr][nc]) {
            dfs(nr, nc, current, grid);
        }
    }
    visited[r][c] = false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> grid(3);
    char min_char = 'Z';
    for (int i = 0; i < 3; i++) {
        cin >> grid[i];
        for (char temp : grid[i]) {
            min_char = min(min_char, temp);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i][j] == min_char) {
                dfs(i, j, "", grid);
            }
        }
    }
    cout << minstr << "\n";
    return 0;
}
