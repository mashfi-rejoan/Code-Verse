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
  int n, m, k; cin >> n >> m >> k;
  multiset<int> ms;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    ms.insert(x);
  }
  vecin(b, m);
  sort(all(b));
  // print(ms);
  // print(b);

  int cnt = 0;
  for (auto u : b) {
    int val = u - k;
    if (val < 0) val = 0;
    auto it = ms.lower_bound(val);
    if (it != ms.end() and *it <= u + k) {
      cnt++;
      ms.erase(it);
    }
  }
  cout << cnt << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  // cin >> t;
  while(t--) solve();

  return 0;
}