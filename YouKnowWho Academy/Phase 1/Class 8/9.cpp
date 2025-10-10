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



void solve() 
{
  int n; cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    int msb = __lg(x);
    if ((x >> msb) & 1) {
      mp[msb]++;
    }
  }
  int ans = 0, cnt = 0;
  for (auto [x, y] : mp) {
    // cout << x << ' ' << y << nl;
    if (y >= 2) {
      y--;
      cnt++;
      ans += ((y * (y + 1)) / 2);
    }
  }
  // trace(ans);
  if (cnt == 1 and ans == 0) cout << 1 << nl;
  else cout << ans << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}