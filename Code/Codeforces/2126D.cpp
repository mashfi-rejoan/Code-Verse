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
  int n, k; cin >> n >> k;
  vector<tuple<int, int, int>> vt;
  for (int i = 0; i < n; i++) {
    int l, r, x; cin >> l >> r >> x;
    vt.push_back(make_tuple(l, r, x));
  }
  sort(all(vt));
  // for (auto [l, r, x] : vt) {
  //   cout << l << ' ' << r << ' ' << x << nl;
  // }
  int coin = k;
  for (auto [l, r, x] : vt) {
    if (l <= coin and coin <= r) {
      coin = max(coin, x);
    }
  }
  cout << coin << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}