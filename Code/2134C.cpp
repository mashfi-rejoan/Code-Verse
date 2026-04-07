/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define i128 __int128
#define int long long
#define sz(x) ((int)(x).size())
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define CEIL(a, b) (((a) + (b) - 1) / (b))
#define trace(x) cout << #x << ": " << x << " \n"
#define print(x) for (auto u : (x)) cout << u << ' '; cout << nl;
#define vecin(name, len) vector<int> name(len); for (auto &_ : name) cin >> _;



void solve() 
{
  int n; cin >> n;
  vector<int> v(n + 5);
  for (int i = 1; i <= n; i++) cin >> v[i];
  int ans = 0;
  if (v[1] > v[2]) {
    ans += (v[1] - v[2]);
    v[1] = v[2];
  }
  // trace(ans);
  for (int i = 3; i <= n; i += 2) {
    int nv = v[i - 1] - v[i - 2];
    if (i + 1 <= n) {
      nv = min(nv, v[i + 1]);
    }
    if (v[i] > nv) {
      ans += (v[i] - nv);
      v[i] = nv;
    }
  }
  cout << ans << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  cin >> t;
  while(t--) solve();

  return 0;
}