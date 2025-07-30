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

  int n, k; cin >> n >> k;
  vector<int> v(n);
  for (auto &u : v) cin >> u;

  int r = 0, sum = 0, mn = LLONG_MAX;
  map<int, int> mp;
  for (int l = 0; l <= n - k; l++) {
    while (r < n and r - l + 1 <= k) {
      sum += v[r];
      r++;
    }
    // cout << sum << nl;
    mn = min(mn, sum);
    mp[sum] = l + 1;
    sum -= v[l];
  }

  // cout << mn << nl;
  // for (auto [x, y] : mp) cout << x << ' ' << y << nl;
  cout << mp[mn] << nl;

  return 0;
}