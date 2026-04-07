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
  if (n == 1) {
    cout << 1 << nl;
    return;
  }
  else if (n & 1) {
    int x = 1;
    int mn = 1e18;
    while (x <= n) {
      int mx = LLONG_MIN;
      for (int i = 1; i <= n; i += 2) {
        if (i == x) {
          i--;
          continue;
        }
        mx = max(mx, (abs(v[i + 1] - v[i])));
        // trace(mx);
      }
      mn = min(mx, mn); 
      x += 2;
    }
    cout << mn << nl;
  }
  else {
    int mx = 1;
    for (int i = 1; i <= n - 1; i += 2) {
      mx = max(mx, v[i + 1] - v[i]);
    }
    cout << mx << nl;
  }
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