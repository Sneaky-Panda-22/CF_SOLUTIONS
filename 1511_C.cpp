#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> color_pos(51, 0);
    for (int i = 1; i <= n; i++) {
        int c;
        cin >> c;
        if (color_pos[c] == 0) {
            color_pos[c] = i;
        }
    }

    for (int i = 0; i < q; i++) {
        int target;
        cin >> target;

        int current_pos = color_pos[target];
        cout << current_pos << " ";

        for (int c = 1; c <= 50; c++) {
            if (color_pos[c] < current_pos) {
                color_pos[c]++;
            }
        }
        color_pos[target] = 1;
    }
    cout << "\n";

    return 0;
}
