#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int full = (1 << n) - 1;
        vector<vector<int>> groups(n);

        for (int x = 0; x <= full; x++) {
            if (x == full) continue;
            for (int b = n - 1; b >= 0; b--) {
                if (((x >> b) & 1) == 0) {
                    groups[b].push_back(x);
                    break;
                }
            }
        }

        // Output the lexicographically minimal sacred permutation
        cout << full << " ";
        for (int b = n - 1; b >= 0; b--) {
            sort(groups[b].rbegin(), groups[b].rend());
            for (int x : groups[b]) {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
