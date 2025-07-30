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
  vector<tuple<int, int, int, int>> vt;
  for (int i = 0; i < n; i++) {
    int a, b, c, d; cin >> a >> b >> c >> d;
    vt.push_back({a, b, c, d});
  }
  int ans = 0;
  for (auto [a, b, c, d] : vt) {
    // cout << a << ' ' << b << ' ' << c << ' ' << d << nl;
    if (a > c) {
      ans += (a - c);
      a = c;
    }
    if (b > d) {
      ans += (b - d) + a;
    }
  }
  cout << ans << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}