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
  int n, m, q; cin >> n >> m >> q;
  vecin(v, m);
  sort(all(v));
  while (q--) {
    int k; cin >> k;
    int ans = 0;
    if (k < v[0]) {
      ans = (v[0] - 1);
    }
    else if (k > v[m - 1]) {
      ans = (n - v[m - 1]);
    }
    else {
      int lb = lower_bound(all(v), k) - v.begin();
      int y = v[lb];
      int x = v[lb - 1];
      int d1 = k - x;
      int d2 = y - k;
      ans = (abs(d1 - d2)) / 2;
      ans += min(d1, d2);
    }
    

    cout << ans << nl;
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