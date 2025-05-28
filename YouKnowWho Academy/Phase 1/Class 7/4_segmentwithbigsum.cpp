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

const int N = 1e5 + 9;
vector<int> a(N);

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, s; cin >> n >> s;
  int all_sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    all_sum += 1LL * a[i];
  }
  // cout << all_sum << nl;
  if (all_sum < s) {
    cout << -1 << nl;
    return 0;
  }
  if (all_sum == s) {
    cout << n << nl;
    return 0;
  }

  int r = 0, ans = LLONG_MAX, sum = 0;
  for (int l = 0; l < n; l++) {
    // cout << ans << nl;
    while (r < n and (1LL * sum + a[r]) < s) {
      sum += 1LL * a[r];
      r++;
    }
    if (r < n) ans = min(ans, (r - l + 1));
    sum -= a[l];
  }
  cout << ans << nl;

  return 0;
}