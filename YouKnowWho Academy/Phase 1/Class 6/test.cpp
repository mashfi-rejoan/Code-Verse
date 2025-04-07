#include<bits/stdc++.h>
#define int long long int
#define nl '\n'
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int b;
    cin >> b;

    // Generate both possible versions
    vector<int> original(v.begin(), v.end());
    vector<int> transformed(n);

    for (int i = 0; i < n; i++) {
        transformed[i] = b - v[i];
    }

    // Check if either array can be sorted
    bool possible_original = is_sorted(original.begin(), original.end());
    bool possible_transformed = is_sorted(transformed.begin(), transformed.end());

    // Output result
    if (possible_original || possible_transformed) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}