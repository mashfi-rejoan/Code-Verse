#include<bits/stdc++.h>
#define int long long
#define nl '\n'
#define all(x) x.begin(), x.end()
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, p; 
    cin >> n >> p;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    sort(all(v));
    
    int l = 0, r = 2e18; // Start with left bound as 0
    int ans = -1; // Default answer for impossible case
    
    while (l <= r) {
        int mid = l + (r - l) / 2; // Safe midpoint calculation
        int time = 0;
        
        for (auto u : v) {
            time += mid / u;
            if (time >= p) break; // Early exit when we meet target
        }
        
        if (time >= p) {
            ans = mid;
            r = mid - 1; // Try for smaller time
        } else {
            l = mid + 1; // Increase time
        }
    }

    cout << ans << nl;

    return 0;
}