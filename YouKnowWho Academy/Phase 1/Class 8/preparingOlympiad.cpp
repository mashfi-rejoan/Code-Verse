/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n";



int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, l, r, x; cin >> n >> l >> r >> x;
  vector<int> c(n);
  for (int i = 0; i < n; i++) cin >> c[i];

  int ans = 0;
  for (int mask = 0; mask < (1 << n); mask++) {
    int total = 0, mn = LLONG_MAX, mx = LLONG_MIN, cnt = 0;
    for (int i = 0; i < n; i++) {
      if ((mask >> i) & 1) {
        cnt++;
        total += c[i];
        mn = min(mn, c[i]);
        mx = max(mx, c[i]);
      }
    }
    if (cnt >= 2 and total >= l and total <= r and (mx - mn) >= x) {
      ans++;
    }
  }
  cout << ans << nl;

  return 0;
}