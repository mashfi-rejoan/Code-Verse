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

const int N = 2e5 + 9;
vector<int> a(N, 0), pref(N, 0), ans(N, 0);

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k, q; cin >> n >> k >> q;
  int lim = N - 5;
  while(n--) {
    int l, r; cin >> l >> r;
    a[l]++;
    a[r + 1]--;
  }
  for (int i = 1; i <= lim; i++) {
    pref[i] = pref[i - 1] + a[i];
  }
  for (int i = 1; i <= lim; i++) {
    if (pref[i] >= k) pref[i] = 1;
    else pref[i] = 0;
  }
  for (int i = 1; i <= lim; i++) {
    ans[i] = ans[i - 1] + pref[i];
  }
  while(q--) {
    int l, r; cin >> l >> r;
    cout << ans[r] - ans[l - 1] << nl;
  }

  return 0;
}