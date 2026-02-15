/*
  In the name of Allah, the Most Gracious, the Most Merciful.
*/

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define i128 __int128
#define int long long
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define CEIL(a, b) (((a) + (b) - 1) / (b))
#define print(x) for (auto u : (x)) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n"


void solve() 
{
  int n, m, a, b; cin >> n >> m >> a >> b;
  vector<pair<int, int>> vp;
  vp.push_back({n, b});
  vp.push_back({a, m});
  vp.push_back({n - a + 1, m});
  vp.push_back({n, m - b + 1});
  int ans = INT_MAX;
  for (auto& [x, y] : vp) {
    int res = ceil(log2(x));
    res += ceil(log2(y));
    ans = min(ans, res);
  }
  cout << ans + 1 << nl;
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