/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n";



int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int l, r; cin >> l >> r;
  if (l == r) {
    cout << 0 << nl;
    return 0;
  }
  int msbl = __lg(l);
  int msbr = __lg(r);
  int diff;
  for (int i = max(msbl, msbr); i >= 0; i--) {
    if (((l >> i) & 1) != ((r >> i) & 1)) {
      diff = i;
      break;
    }
  }
  // trace(diff);
  int ans = 0;
  for (int i = 0; i <= diff; i++) {
    ans += 1LL * (1LL << i);
    // trace(ans);
  }
  cout << ans << nl;

  return 0;
}